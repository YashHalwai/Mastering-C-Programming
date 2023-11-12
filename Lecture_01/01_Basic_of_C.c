// Single Line Comment

/*
Multi Line Comment
*/

// 1) Structure of  a C program

/*
#1) A C program consists of functions.
#2) The 'main()' functions is the entry point of the program.
#3) It typically includes a header file ('#include') 
for input and output operations.
*/

// Simple Example:-

// #include <stdio.h>

// int main()
// {
//     printf("Hello World");
//     return 0;
// }

/*
In this example, '#include <stdio.h' includes a standard 
input/output library, and 'printf' is used to print "Hello World"
to the console.
*/

// 2) Variables

/*
#1) Variables are used to store data in C.
#2) e.g:- int age; float height
#3) Variables can hold various types of data like integers,
floats, characters, double, etc....
*/

// #include <stdio.h>

// int main()
// {
//     int age = 18;
//     printf("%d\n",age);
//     float price = 12.75;
//     printf("%f\n", price);
//     char grade = 'A';
//     printf("%c", grade);
    
//     return 0;
// }

// 3) Type Casting

/*
Type casting is used to convert one data type to another.
*/
/*
int num1 = 10;
double num2 = (double)num1;
*/

// # include <stdio.h>

// int main()
// {
//     int num1 = 10;
//     int num2 = 3;
//     double result;

//     result = (double)num1 / num2; // Expression

//     printf("%f", result); // output operation

//     return 0;
// }

// 4) Expression 

/*
Expression are combinations of variables and operators.
For example, you can perform arithmetic operations like addition, subtraction,
division, multiplication....
*/

// int result = 5 + 1; => 6

// 5) Input/Output Operations

/*
C provides functions for input ('scanf') and output ('printf').
*/

// A very good example covers all Basic of C concept in easy manner:-

// #include <stdio.h>

// int main()
// {

//     // Variable declarations and initializations
//     int age = 18;
//     float price = 99.9;
//     char grade = 'B';
//     double convertedPrice;

//     // Output Printing variable values
//     printf("Age: %d\n", age);
//     printf("Price: %f\n", price);
//     printf("Grade: %c\n", grade);

//     // Typecasting example: convert the price to an integer
//     convertedPrice = (double)price; // type casting from float to double

//     // Expression: Calculating a new price
//     convertedPrice = convertedPrice * 2.0; // Doubling the price

//     // Output: Printing the new price after type casting and expression
//     printf("Converted Price (doubled): %f\n", convertedPrice);

//     // Input: Getting the user's name
//     char name[50]; // Declare a character array to store the name
//     printf("Enter your name: ");
//     scanf("%s", name); // Read a string (name) from the user
//     printf("Hello, %s!\n", name); // No '&' is needed, 'name' is already a pointer

//     int age1;
//     printf("Enter your age: ");
//     scanf("%d", &age1); // & is used to pass the address of 'age'
//     printf("%d", age1);

//     return 0;
// }