# OOPDS Lab Assignment

'''

## LAB1 
22/08/2023

### Title 
Write a simple C program to print "Hello world" on screen and understand the complete development process.

### Theory
Compiling program is the process of converting high level programming language into low level programming language that can be executed by computer's central processing unit. To turn a C program into an executable file, a series of steps that involve writing, compiling, and linking the code.

### Output Screenshot
![helloworld](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/e1838685-590e-4476-b421-27b8a2d1325c)

'''

## LAB2(a)
23/08/2023

### Title
Write a C program to print size of different data types.

### Theory
The sizeof operator in C is used to determine the size, in bytes, of a data type or a variable. The syntax for using the sizeof operator is as follows: sizeof (type); 
The %lu or %zu format specifier used for sizeof operator.

### Output Screenshot 
![sizeof operator](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/1403bb87-fe45-4cef-ba21-ec44835fb8fe) 

' ' '

' ' '

## LAB2(b)
23/08/2023

### Title
Write a C program to read a number from user and print a table of multiplication for that number.

### Aim
To print a table of a number.

### Explanation
By using for loop, table of multiplication for any number will be execute.

### Output Screenshot
![Screenshot (68)](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/c8640da9-0b35-46b6-8ebc-790c3170da70)

' ' '

' ' '

### LAB2(c)
23/08/2023

### Title
Write a program to display different star patterns on screen.

### Aim 
To print star pattern.

### Explanation
In this programme, the user wants to make a pattern by entering the number of rows and columns. The programme creates a pattern of stars with two halves: one with ascending rows and the other with descending rows, separated by a newline character. The number of stars in each row is determined by the value of "i" within the respective loops by using nested for loops.

### Output Screenshot
![star pattern](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/e5e872dc-a1b7-4679-a0e0-04dcedd462cc)

' ' '

' ' '

## LAB3(a)
29/08/2023

### Title
Write a program to demonstrate pointers. Declare a pointer ptr to interger and equate it to address of integer i. Print value of i, value of &i, value of ptr and value of *ptr.

### Theory
A pointer is a variable that stores the memory address of another variable. It "points" to the location in memory where data is stored. int *ptr; declares a pointer ptr that can point to an integer.

### Explanation
This program explain how pointers can be used to access memory addresses and the values stored at those addresses. 

### Output Screenshot
![pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/4013818d-fc22-43d5-920a-949715921fd5)

' ' '

' ' '

## LAB3(b)
29/08/2023

### Title
Write a program in C to demonstrate function call by value and call by reference by writing a swap function to swap two integers.

### Theory
In C programming there are two ways to pass an arguments to functions : call by value and call by reference, These two methods determine how the function receives and operates on its parameters. In call by value, copies of the actual values are made and passed to the function. And In call by reference, arguments pass the memory address of the actual variables to the function.

### Explanation
In this program swap1, which is used to swap the values of two integers using pointers, call by reference. 

### Output Screenshot
![swapping](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/487ee2a8-c4d6-4f5e-a7af-2a37fc31ff1b)

' ' '

' ' '
## LAB6(a)
14/09/2023

### Title
Write a program to declare a char array of 20 characters. Read a word (using scanf or cin >> ) into the char array.

### Theory
In programming, a character array is a data structure used to store sequences of characters, such as strings, in a contiguous block of memory. It is a fundamental part of many programming languages and plays a crucial role in text processing, manipulation, and storage. To declare a character array, you specify its data type, the array name, and its size. 

### Explanation
The given C++ program demonstrates how to declare a character array, read user input into the array, and then display the input back to the user. A character array named word is declared. It has a size of 20 characters, meaning it can store up to 19 characters plus a null-terminator (a special character, '\0', used to mark the end of strings).

### Output Screenshot
![declare a char array](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/7d6055fc-965a-4641-a9d3-18455cbf56fb)

' ' '

' ' '
## LAB6(b)
14/09/2023

### Title 
Display the array and reverse of the array on screen.

### Theory
In programming, an array is a data structure that holds a collection of elements of the same data type, arranged sequentially in memory. The elements in an array are typically accessed by an index, with the first element having an index of 0, the second having an index of 1, and so on. An array may contain various types of data, including integers, characters, floating-point numbers, or even complex objects. To display the contents of an array on the screen, we typically use some form of output operation provided by the programming language, such as cout in C++. A loop, often a for or while loop, is used to iterate through the elements of the array, and each element is printed to the screen. The loop continues until all elements have been displayed. Reversing an array means changing the order of its elements such that the first element becomes the last, the second element becomes the second-to-last, and so on. A common approach to reversing an array is to use two pointers (one starting from the beginning, and the other from the end) and swap their elements iteratively. Alternatively, we can use a loop to create a new array that contains the elements of the original array in reverse order. For numeric arrays, we can also perform in-place reversal, which means that we directly modify the original array.

### Explanation
Three character variables are declared - str, arr, and reverse_arr. str is an array of characters to store the word, while arr and reverse_arr are individual characters. The program prompts the user to enter a word and reads it into the str array. It prints Array is as a part of the output. This loop iterates through the characters of the str array and prints each character. It also assigns each character to the arr variable. The program prints a newline character and Reverse of array is to move to the next line and indicate the start of the reversed output.

### Output Screenshot
![array reverse of array](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/68c316ea-d853-4347-b1ac-097e1511af81)

' ' '

' ' ' 
## LAB6(c)
14/09/2023

### Title
Check if the word is a pallindrom. (A word is a palidrom if it reads same either traight or reverse. e.g. "madam')

### Theory
A palindrome is a word, phrase, number, or other sequence of characters that reads the same forwards and backwards. It is a symmetric sequence that reads the same when reversed. A program to check if a word is a palindrome is a fundamental text processing task that involves character comparison, input validation, and reporting the result. It is a common problem used in programming challenges, data validation, and linguistic analysis. 

### Explanation
Given C++ program checks if a given word is a palindrome. The program checks if arr and reverse_arr are equal. It's determine if the word is a palindrome by comparing the first and last characters. 

### Output Screenshot
![word is palindrome](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/c7702cfb-71b9-4202-ab73-a76e6cc8bc3b)
![word is not palindrome](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/d59bfce4-e9fd-484c-b220-25fb492888b5)

' ' '

' ' '
## LAB6(d)
14/09/2023

### Title 
Using pointer please calculate length of the word.

### Theory
Pointers are variables that store memory addresses, which allows for direct access to data stored in memory. In C and C++, pointers are widely used for efficient memory management and various operations on data structures. Using pointers to calculate the length of a word or string involves traversing the characters of the string, incrementing a pointer, and counting characters until the null character is encountered. Understanding pointers, character arrays, and string representation is crucial for efficiently working with strings in C and C++ and various other programming languages.

### Explanation
The given C++ program calculates and displays the length of a string, which is "symbiosis" in this case. The strlen function from the C Standard Library (provided by <cstring>) is used to calculate the length of the string stored in the str variable. The result of strlen is assigned to the integer variable len, which stores the length of the string. The result is then displayed using cout. This program is an efficient way to find the length of a string and can be adapted for other strings as needed.

### Output Screenshot
![length of string using pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/8cd2f29d-cc8e-416a-aefa-2d173d7109fd)

' ' '
