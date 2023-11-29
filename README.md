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
23/08/2023 - 29/08/2023

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
23/08/2023 - 29/08/2023

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
23/08/2023 - 29/08/2023

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
30/08/2023 - 05/09/2023

### Title
Write a program to demonstrate pointers. Declare a pointer ptr to interger and equate it to address of integer i. Print value of i, value of &i, value of ptr and value of *ptr.

### Theory
A pointer is a variable that stores the memory address of another variable. It "points" to the location in memory where data is stored. int *ptr; declares a pointer ptr that can point to an integer.

### Explanation
This program explain how pointers can be used to access memory addresses and the values stored at those addresses. 

### Output Screenshot
![pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/4013818d-fc22-43d5-920a-949715921fd5)

' ' '
## LAB3(b)
30/08/2023 - 05/09/2023

### Title
Write a program in C to demonstrate function call by value and call by reference by writing a swap function to swap two integers.

### Theory
In C programming there are two ways to pass an arguments to functions : call by value and call by reference, These two methods determine how the function receives and operates on its parameters. In call by value, copies of the actual values are made and passed to the function. And In call by reference, arguments pass the memory address of the actual variables to the function.

### Explanation
In this program swap1, which is used to swap the values of two integers using pointers, call by reference. 

### Output Screenshot
![swapping](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/487ee2a8-c4d6-4f5e-a7af-2a37fc31ff1b)

' ' '
## LAB4
06/09/2023

### Title
ER diagrams and UML

### Theory
A use case is a list of actions or event steps that define interactions between an actor and a system to achieve a goal. It helps identify, clarify, and organize system requirements. A use-case diagram provides a higher-level view of the system, simplifying and graphical representations. UML Sequence diagrams are interaction diagrams that detail how operations are carried out, capturing interaction at different levels of granularity. They can be used in the transition from use cases to more formal refinements, representing objects in the Model, View / Controller (MVC) pattern of a software framework.

### Explanation
Use cases are a powerful technique for eliciting and documenting black-box functional requirements, as they are easy to understand and provide an excellent way for communicating with customers and users. They help manage the complexity of large projects by partitioning problems into major user features and specifying applications from the users' perspective. A use case scenario, often represented by a sequence diagram, involves the collaboration of multiple objects and classes, helping identify the messages that glue the objects and classes together.

To draw a use case diagram, follow these steps: identify the actors (roles of users), create use cases for every goal, structure the use cases, prioritize, review, estimate, and validate users. The components of a use case diagram include the actor, use case, relationship, and system boundary.

When drawing a sequence diagram, consider the first point of the scenario, what the system needs to do in order to respond to the actor, and what the system needs to be handled before the return message response back from the system. This helps identify the candidate objects and operations of the target application for that particular scenario and can be used as a basis to derive the class diagram incrementally.

The components of a sequence diagram include lifelines, actors, activations, call messages, return messages, self messages, recursive messages, create messages, destroy messages, duration messages, and notes. These elements help identify the communication between lifelines of an interaction, the invocation of operations, the request of destroying the lifecycle of the target lifeline, and the distance between two time instants for a message invocation.

### Output Screenshot
![UseCaseDiagram ATM machine](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/c90c90ba-2597-4abc-84b2-0c4a0f1a0cbd)
![SequenceDiagram1](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/b7703f7d-566f-4ad0-a883-764ecba3ac5c)

' ' '
## LAB5
11/09/2023

### Title
Recursion

### Theory
Recursion is a programming technique where a function calls itself to solve smaller problems, particularly those that can be broken down into similar subproblems. It has a base case that defines the simplest instance of the problem and a recursive case that defines how the problem is broken down into smaller subproblems. Recursion uses the call stack to track function calls, adding a new frame to the stack when the base case is reached. It offers advantages such as simplicity, readability, and divide and conquer. However, it can lead to performance overhead and stack overflow.

### Explanation
The algorithm involves adding the first n integers, factoring n, printing the reverse of strings and numbers, and using recursion. It involves creating function declarations, writing recursion logic, and calling the functions. The process involves adding n integers, multiplying them, and printing the reverse of strings and numbers.

### Output Screenshot
![recursion](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/469b6657-fbc8-4fc8-b08d-8b3b9ea9720a)

' ' '
## LAB6(a)
14/09/2023 - 18/09/2023
 
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
14/09/2023 - 18/09/2023
 
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
14/09/2023 - 18/09/2023

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
14/09/2023 - 18/09/2023

### Title 
Using pointer please calculate length of the word.

### Theory
Pointers are variables that store memory addresses, which allows for direct access to data stored in memory. In C and C++, pointers are widely used for efficient memory management and various operations on data structures. Using pointers to calculate the length of a word or string involves traversing the characters of the string, incrementing a pointer, and counting characters until the null character is encountered. Understanding pointers, character arrays, and string representation is crucial for efficiently working with strings in C and C++ and various other programming languages.

### Explanation
The given C++ program calculates and displays the length of a string, which is "symbiosis" in this case. The strlen function from the C Standard Library (provided by <cstring>) is used to calculate the length of the string stored in the str variable. The result of strlen is assigned to the integer variable len, which stores the length of the string. The result is then displayed using cout. This program is an efficient way to find the length of a string and can be adapted for other strings as needed.

### Output Screenshot
![length of string using pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/8cd2f29d-cc8e-416a-aefa-2d173d7109fd)

' ' '
## LAB6(d)
14/09/2023 - 18/09/2023

### Title 
Using pointer please calculate length of the word.

### Theory
Pointers are variables that store memory addresses, which allows for direct access to data stored in memory. In C and C++, pointers are widely used for efficient memory management and various operations on data structures. Using pointers to calculate the length of a word or string involves traversing the characters of the string, incrementing a pointer, and counting characters until the null character is encountered. Understanding pointers, character arrays, and string representation is crucial for efficiently working with strings in C and C++ and various other programming languages.

### Explanation
The given C++ program calculates and displays the length of a string, which is "symbiosis" in this case. The strlen function from the C Standard Library (provided by <cstring>) is used to calculate the length of the string stored in the str variable. The result of strlen is assigned to the integer variable len, which stores the length of the string. The result is then displayed using cout. This program is an efficient way to find the length of a string and can be adapted for other strings as needed.

### Output Screenshot
![length of string using pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/8cd2f29d-cc8e-416a-aefa-2d173d7109fd)

' ' '
## LAB6(d)
14/09/2023 - 18/09/2023

### Title 
Using pointer please calculate length of the word.

### Theory
Pointers are variables that store memory addresses, which allows for direct access to data stored in memory. In C and C++, pointers are widely used for efficient memory management and various operations on data structures. Using pointers to calculate the length of a word or string involves traversing the characters of the string, incrementing a pointer, and counting characters until the null character is encountered. Understanding pointers, character arrays, and string representation is crucial for efficiently working with strings in C and C++ and various other programming languages.

### Explanation
The given C++ program calculates and displays the length of a string, which is "symbiosis" in this case. The strlen function from the C Standard Library (provided by <cstring>) is used to calculate the length of the string stored in the str variable. The result of strlen is assigned to the integer variable len, which stores the length of the string. The result is then displayed using cout. This program is an efficient way to find the length of a string and can be adapted for other strings as needed.

### Output Screenshot
![length of string using pointer](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/8cd2f29d-cc8e-416a-aefa-2d173d7109fd)

' ' '
## LAB7
21/09/2023 - 25/09/2023

### Title 
Reading and writing data from an xcel file using r(read) mode and malloc dynamic memory allocation.

### Theory
Programming involves the creation, modification, and upkeep of files, which is why file handling is so important. On solid-state drives and hard drives, among other storage devices, it is used to permanently store data. File handling is covered by dedicated libraries and functions in programming languages such as C, C++, and Python. File positioning, error handling, opening and shutting files, reading from and writing to files, file modes, and binary file handling are some of the key ideas and actions associated with file handling. To operate on files, one can use functions like fscanf, fprintf, and fwrite. When doing file operations, it's crucial to look for mistakes and refer to the language's or library's documentation for comprehensive details on file handling features and recommended procedures.

### Explanation
Using an input CSV file, this code shows how to read it and produce an output file. After defining a structure to hold data, it reads the input file, parses the CSV, allocates memory for a new structure, increments the counter, stores the structure pointer in a dynamic array, and closes the input file. The dynamic array is then iterated over, the data for each structure is sent to the output file, and the memory that was allotted is released.

### Output Screenshot
![output](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/2319b36d-dd67-4c18-b106-58f5a9079b90)

' ' '
## LAB8
28/09/2023 - 05/10/2023

### Title 
Create a class with a specific date and access its functions using the class object (today).

### Theory
In C++, public and private access specifiers control the visibility of class members. Public members are accessible from outside the class, providing an interface to the outside world, while private members are hidden and only accessible by member functions of the same class. They are used to encapsulate implementation details and enforce data encapsulation. An example implementation is creating a Date class with private data members for day, month, and year.

### Explanation
Build a date class, initialise month_days, int arr, and ptr to strings, accept user input, display the date in slashed form, verify the leap year, tally the number of days, display the date without slashed form, and display the weekday.

### Output Screenshot
![classimplementation](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/463d4d1c-0359-4b53-baa0-fd4f8d75bd6e)

' ' '
## LAB9
09/10/2023

### Title 
Create a class with a specific date and access its functions using the class object (today).

### Theory
Constructors and destructors are special member functions in C++ that are used for initializing and cleaning up class objects. Constructors are automatically called when an object is created, initializing the object and setting its initial state. They have the same name as the class and can be overloaded, allowing multiple constructors with different parameter lists. Destructors are automatically called when an object goes out of scope or is explicitly deleted, releasing resources, such as memory, acquired during its lifetime. They have the same name as the class but are preceded by a tilde (`~`). The constructor is used for allocating resources, initializing variables, and performing other setup tasks, while the destructor is used for releasing resources, closing files, freeing memory, and performing other cleanup tasks.

### Explanation
Build a date class, initialise month_days, int arr, and ptr to strings, accept user input, display the date in slashed form, verify the leap year, tally the number of days, display the date without slashed form, and display the weekday.

### Output Screenshot
![classimplementation](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/4f49ed17-6977-421d-88cc-ca501b73ce67)

' ' '
## LAB9
09/10/2023

### Title 
Create a class with a specific date and access its functions using the class object (today).

### Theory
Constructors and destructors are special member functions in C++ that are used for initializing and cleaning up class objects. Constructors are automatically called when an object is created, initializing the object and setting its initial state. They have the same name as the class and can be overloaded, allowing multiple constructors with different parameter lists. Destructors are automatically called when an object goes out of scope or is explicitly deleted, releasing resources, such as memory, acquired during its lifetime. They have the same name as the class but are preceded by a tilde (`~`). The constructor is used for allocating resources, initializing variables, and performing other setup tasks, while the destructor is used for releasing resources, closing files, freeing memory, and performing other cleanup tasks.

### Explanation
Build a date class, initialise month_days, int arr, and ptr to strings, accept user input, display the date in slashed form, verify the leap year, tally the number of days, display the date without slashed form, and display the weekday.

### Output Screenshot
![constructor destructor](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/70e60b2e-4ec6-4f9c-b267-c757d07e0a73)

' ' '
## LAB10
12/10/2023 - 13/10/2023

### Title 
Operator Overloading

### Theory
The Date class is a simple date management algorithm that checks if a given year is a leap year by dividing it by 4 or 400. It also determines the number of days in the current month using the daysInMonth function. The algorithm also overloads the ++ operator to increment the day by one, checking if the new day exceeds the number of days in the month. If the month exceeds 12, the day is reset to 1 and the year is incremented. The main function creates an instance of the Date class with an initial date, displays the current date, and uses the overloaded ++ operator to increment the date by one day.

### Explanation
The program initializes a "Date" box with three pieces of information: day, month, and year. It checks if a year is a "leap year" by determining if it is divisible by 4 or 400. It also considers the number of days in each month, such as February having 28 or 29 days in a leap year. An overloaded ++ operator is created to add one day to the date, increasing the day value by 1. If the day becomes too big for the month, it is reset to 1 and added to the month, and if the month is too big (over 12), it is reset to 1 and added to the year. The main function displays the date, adds one day using the rule, and displays the updated date. This program resembles managing a calendar, setting a date, checking for special years, knowing the number of days each month has, and following rules to move to the next day.

### Output Screenshot
![operator overloading](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/9b88b822-efa3-4aa7-9593-4dd45823badd)

' ' ' 
## LAB11
16/10/2023

### Title 
Class Inheritance

### Theory
In C++ inheritance is a mechanism that allows a class to inherit properties and behaviors from another class, promoting code reusability. It is based on the parent class, which is the class whose properties and behaviors are inherited by another class. The derived class, also known as the child class, inherits from the parent class. There are three types of inheritance: single, multiple, and multilevel. Access specifiers (public, protected, private) determine the visibility of base class members in the derived class. The base class constructor and destructor are called when an object of the derived class is created or destroyed, with constructors called in the order of inheritance.

### Explanation
The algorithm for constructor calling in inheritance in C++ involves calling the base class constructor first, followed by the derived class constructor. This is because the derived class inherits the properties and behavior of the base class, and before any additional initialization, the base class needs to be properly constructed. If the base class has a parameterized constructor, the derived class's constructor must call it explicitly. The derived class constructor can perform its initialization and may call the base class constructor explicitly using the base class's constructor within its member initializer list. The order of inheritance determines the order in which constructors are called, with the base class constructor being called first and the derived class constructor being called after.

### Output Screenshot
![inheritance](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/7eee9ed2-fccb-47cd-bfdb-0e9b374cca2f)

' ' '
## LAB12
19/10/2023 - 23/10/2023

### Title 
Linked List

### Theory
A linked list is a linear data structure where elements are stored in nodes, each pointing to the next node in the sequence. Unlike arrays, linked lists do not have a fixed size and memory is allocated dynamically as needed. Key concepts include nodes, heads, singly linked lists, and doubly linked lists. Basic operations include inserting, deleting, and traversal. Advantages of linked lists include dynamic size, efficient inserting and deletion, and no wasted memory. However, disadvantages include inefficient random access and extra memory for pointers. Overall, linked lists offer flexibility and flexibility in data structures.

### Explanation
The algorithm of linked list allows users to add, remove, and display numbers within a list. Each node in the list has a value and a pointer pointing to the next node in the list. The global head pointer is used to track the first node, which is set to "nowhere" initially. To add a node, create a new node and put the desired value in it. If the list is empty, create a new node and point to the current first node. If the list is not empty, delete the first node and update the head to point to the next node. If there are more than one node, find the second-to-last node and point to nullptr. The linked list is displayed by starting at the head and printing the value of each node. The main function and menu display options for the user, allowing them to choose an action and continue until the user chooses to exit. In summary, the linked list is a chain of containers, allowing users to add, remove, and display numbers within them. The algorithm is simple and efficient, allowing users to manage their list effectively.

### Output Screenshot
![linkedlist](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/aa67ab51-b7b7-49a0-993c-1b0ac0a46c5b)

' ' '
## LAB13
26/10/2023 - 30/10/2023

### Title 
Stack Implementation

### Theory
A stack is a fundamental data structure that follows the Last In, First Out (LIFO) principle. It is a collection of elements with two main operations: push (add an element to the top) and pop (remove the top element). A peek operation allows users to view the top element without removing it. A stack is considered empty when it contains no elements, while a full stack may have a fixed size and is considered full when it reaches its maximum capacity. Stack overflow occurs when trying to push an element onto a full stack, while stack underflow occurs when trying to pop an element from an empty stack. In the Array implementation, the `push`, `pop`, and `peek` operations are defined, and the array keeps track of the stack elements. The program checks for stack overflow and underflow conditions. In the Linked List implementation, the `Node` class is used to create a Linked List with the `Stack` element

### Explanation
The stack algorithm is a user-friendly interface that allows users to interact with a stack by performing operations like adding, removing, displaying, and peeking at elements. It is implemented using an array and a variable (top) that keeps track of the top element's position. The program displays a menu with options for push, pop, display, peek, and exit, prompting the user to enter their choice and perform the corresponding operation. If an invalid choice is entered, it displays an error message. The program continues to execute until the user chooses to exit, repeating the menu and operation execution based on the user's input. The stack is like a stack of books, where users can add or remove books, and the last book added is the first one removed. The computer can add or remove numbers, display or peek, and keep going until the user says "I'm done." The program is designed to be user-friendly and allows users to interact with the stack like a stack of books.

### Output Screenshot
![stack1](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/bc90ed5e-ee55-4552-a5c1-99d4c73a8cc2)
![stack2](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/97abe977-5417-401b-a85f-daf077934d5b)
![stack3](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/7ba16393-7f03-4586-afc6-b917eaec1836)
![stack4](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/77ac522e-03e5-485c-8aa6-b1585af21e23)
![stack5](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/616b777a-ad67-498b-875a-3be9bc1af59b)

' ' '
## LAB14
02/11/2023

### Title 
Queue Implementation 1

### Theory
Queues are fundamental data structures that follow the First In, First Out (FIFO) principle, ensuring that the oldest element in the queue is the first one to be removed. They can be implemented using arrays or linked lists, with fixed-size arrays used for enqueue and dequeue operations, and linked lists used for linked list implementations. Queues have advantages such as orderly processing, breadth-first search, and task scheduling. They are crucial in algorithms like breadth-first search in graph traversal and are often used in task scheduling systems. However, they have disadvantages such as limited random access and fixed size limitations. To use a queue, follow the guidelines of FIFO, ensure efficient insertion and deletion, be mindful of memory usage, and implement proper error handling for overflow and underflow conditions. Understanding the principles of queues is essential for designing and implementing efficient algorithms and systems. Queues are versatile data structures with applications in various fields, including operating systems, network management, and simulations.

### Explanation
The algorithm consists of three operations: enqueue (add an element to the queue), dequeue (remove an element from the queue), display (show all elements in the queue), and peek (get the front element without removing it). Enqueue adds an element to the back of the queue, ensuring that the first person in line leaves if the queue is empty. Dequeue removes an element from the queue, ensuring that the first person leaves if there's only one person in line. Display shows all elements in the queue, starting from the first person and moving towards the last. Peek allows for quick checking of the front position without removing the element. These operations ensure that elements are added at the rear and removed from the front, maintaining the first-in-first-out (FIFO) order.

### Output Screenshot
![queueimplementation1](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/0e7a64f4-0252-4754-981a-9f5b834239cd)
![queueimplementation2](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/ff5d327e-8f92-4bf3-948b-9228e59b43ea)

' ' '
## LAB15
04/11/2023

### Title 
Searching Techniques

### Theory
Searching is a fundamental operation in computer science, involving finding specific elements or values in data. There are various techniques, each with its own characteristics and use cases. Linear Search, also known as sequential search, is simple and easy to understand, suitable for small collections or unordered lists. Binary Search, on the other hand, is applicable to sorted collections and divides the collection in half, comparing the target value to the middle element. It is efficient for large sorted collections.

### Explanation
Linear and binary search algorithms are two methods for searching for an element in an array. Linear search is straightforward but less efficient, especially for large arrays, while binary search is highly efficient for sorted arrays. Linear search takes an array arr, its size size, and a target element target as arguments. It iterates through the array using a for loop, checking each element to see if it matches the target. If it finds the target element, it returns the index at which it was found. If not, it returns -1. In the main function, linearSearch is called to search for the target element in the array and print the result. In contrast, binary search takes a sorted array arr, its size size, and a target element target as arguments. It maintains two pointers, left and right, which define the search interval. The function repeatedly calculates the mid index and checks if the element at mid matches the target. If the element is found, it returns the index. If not, it adjusts the left and right pointers to search the appropriate half of the array. The search continues until the target is found or the interval is empty, in which case it returns -1.

### Output Screenshot
![searchinglinear](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/26031b3d-a4ba-4706-b3cb-2bc5d86bd3f7)
![searchingbinary](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/0dd7de19-ad50-48d3-8491-1c4c0bfa17db)

' ' '
## LAB16
04/11/2023 - 06/11/2023

### Title 
Binary Search Tree 1

### Theory
Binary search is a searching algorithm that operates on sorted collections of data by dividing the search space in half until the target element is found or the space is empty. It is most effective when applied to a sorted collection, and its principles include sorting, divide and conquer, midpoint calculation, target comparison, and reducing search space. Binary search is highly efficient, especially for large sorted collections. The steps of binary search include initializing the collection, calculating the midpoint, comparing the target with the midpoint, and adjusting search space. However, it has disadvantages such as the need for a sorted collection and memory overhead when using linked lists. Despite these drawbacks, binary search remains a fundamental algorithm used in various applications for quick and efficient search.

### Explanation
The Binary Search Tree algorithm is a user-friendly tool that allows users to perform various operations on the tree interactively. It consists of three main algorithms: Node Insertion, Tree Traversal, and Node Deletion. Node Insertion adds a new number to a list of numbers, while Tree Traversal helps go through the list in a specific order. Inorder Traversal visits all nodes in ascending order, while Preorder Traversal visits the current node before its children. Postorder Traversal visits the current node after its children. Node Deletion removes a number from the tree, and the user can choose to insert, traverse, delete, or exit the program. The menu-driven interface allows users to choose what to do with the list, such as adding a number, looking at the list in different ways, removing a number, or leaving. The user can choose to add a number, look at the list in order, start from the top, or start from the bottom, or remove a number from the list. If done, the user can exit the program or the list. Overall, the Binary Search Tree algorithm is a powerful tool for data analysis and visualization.

### Output Screenshot
![binarysearch1](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/eb45d297-d8e3-491f-aac9-38249f9642fb)
![binarysearch2](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/aa0b23e5-8c35-464b-b65c-301da1b0eb42)
![binarysearch3](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/13b79945-cd72-43ee-a5bf-85b75011e6d5)
![binarysearch4](https://github.com/ankita430/OOPDS-Lab-Assignment/assets/141404641/81ee5f23-b9c0-4125-aa87-4cdb4ae517f3)

' ' ' 
## LAB17
16/11/2023 - 20/11/2023

### Title 
Sorting Algorithm 1

### Theory

### Explanation

### Output Screenshot

' ' '
## LAB18
23/11/2023

### Title 
Graph Data Structure

### Theory

### Explanation

### Output Screenshot

' ' '



