#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 50
#define DICT_FILE "dictionary.txt"
#define PARAGRAPH_FILE "paragraph.txt"

// Function to check spelling of a word
int checkSpelling(char *word, FILE *dict)
{
    char dictWord[MAX_WORD_LEN];

    // Rewind to the beginning of the dictionary file
    rewind(dict);

    // Iterate through the dictionary
    while (fscanf(dict, "%s", dictWord) == 1)
    {
        // Compare the lowercase version of the word with each entry in the dictionary
        if (strcasecmp(word, dictWord) == 0)
        {
            return 1; // Word found in the dictionary
        }
    }

    return 0; // Word not found in the dictionary
}

// Function to sanitize a word by removing non-alphabetic characters
void sanitizeWord(char *word)
{
    size_t len = strlen(word);
    size_t i, j = 0;

    for (i = 0; i < len; i++)
    {
        if (isalpha(word[i]))
        {
            word[j++] = tolower(word[i]);
        }
    }

    word[j] = '\0'; // Null-terminate the sanitized word
}

int main()
{
    FILE *paragraphFile, *dictFile;
    char word[MAX_WORD_LEN];
    char paragraph[MAX_WORD_LEN * 100]; // Allowing up to 100 words in the paragraph

    // Open dictionary file
    dictFile = fopen(DICT_FILE, "a+"); // Open for reading and appending
    if (dictFile == NULL)
    {
        perror("Error opening dictionary file");
        return 1;
    }

    // Dynamically input the paragraph from the user
    printf("Enter your paragraph (up to 100 words):\n");
    fgets(paragraph, sizeof(paragraph), stdin);

    // Open paragraph file for writing
    paragraphFile = fopen(PARAGRAPH_FILE, "w");
    if (paragraphFile == NULL)
    {
        perror("Error opening paragraph file");
        fclose(dictFile);
        return 1;
    }

    // Write the user-input paragraph to the file
    fprintf(paragraphFile, "%s", paragraph);

    // Close the paragraph file
    fclose(paragraphFile);

    // Open the paragraph file for reading
    paragraphFile = fopen(PARAGRAPH_FILE, "r");
    if (paragraphFile == NULL)
    {
        perror("Error opening paragraph file");
        fclose(dictFile);
        return 1;
    }

    // Read each word from the paragraph file
    while (fscanf(paragraphFile, "%s", word) == 1)
    {
        // Sanitize the word by removing non-alphabetic characters
        sanitizeWord(word);

        // Check the spelling of the word
        if (!checkSpelling(word, dictFile))
        {
            // Word is not in the dictionary
            printf("Spelling error: %s\n", word);

            // Provide options to the user (1. Add to dictionary, 2. Ignore)
            int option;
            printf("Options:\n");
            printf("1. Add to dictionary\n");
            printf("2. Ignore and move forward\n");
            printf("Choose an option: ");
            scanf("%d", &option);

            // Handle user choice
            if (option == 1)
            {
                // Position the file pointer to the end of the file
                fseek(dictFile, 0, SEEK_END);
                // Add the word to the dictionary on a new line
                fprintf(dictFile, "%s\n", word);
                printf("Word added to dictionary.\n");
            }
            else
            {
                // Ignore and move forward
                printf("Word ignored.\n");
            }
        }
    }

    // Close files
    fclose(paragraphFile);
    fclose(dictFile);

    return 0;
}
