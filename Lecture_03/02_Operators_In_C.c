// Operaors in C

/*

1) Assignment Operators:

Used for assigning values to variables.

Example:
int x = 5; // Here, '=' is the assignment operator

*/

/*

2) Arithmetic Operators:

Used for performing basic arithmetic operations.

Example:

int a = 10; b = 3;

int sum = a + b; // Addition
int difference = a - b; // Subtraction
int product = a * b; // multiplication
int quotient = a / b; // Division
int remainder = a % b; // Modulo (remainder)

*/

/*

3) Relational Operators:

Used for comparing values and producing Boolean results.

Example:

int p = 5; q = 8;
bool isEqual = (p == q); # Equal to (==)
bool isNotEqual = (p != q); # Not equal to (!=)
bool isGreater = (p > q); # Greater than
bool isLess = (p < q); # Less than 
bool isGreaterThanEqual = (p >= q) # Greater than equal to
bool isLessThanEqual = (p <= q) # Less than equal to

*/

/*

4) Logical Operators:

Used to perform logical operations on boolean values

Example:

bool condition1 = True, condition2 = False;

# Logical AND
bool andResult = condition1 && condition2
&& => 1 && 1 = 1 othercase 0 (1 && 0 = 0, 0 && 1 = 0, 0 && 0 = 0)

# Logical OR
bool orResult = condition1 || condition2
|| => 0 || 0 = 0 othercase 1

# Logical NOT
bool notResult = !condition1; // Logical NOT


*/


// 1) Assignment Operators

// #include <stdio.h>

// int main() {

//     int x;
//     x = 5; // Assign the value 5 to the variable x
//     printf("The value of x is %d\n", x);
    
//     return 0;
// }


// 2) Arithmetic Operators 

// #include <stdio.h>

// int main() {

//     int a = 10, b = 3;

//     int sum = a + b; // Addition
//     int difference = a - b; // Subtraction
//     int product = a * b; // multiplication
//     int quotient = a / b; // Division
//     int remainder = a % b; // Modulo (remainder)

//     printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %d\nRemainder: %d\n",
//     sum, difference, product, quotient, remainder);
//     // printf("Sum: %d\n", sum);
//     // printf("Difference: %d\n", difference);

//     return 0;
// }

// 3) Relational operators:

// #include <stdio.h>

// int main()
// {
//     int p = 5, q = 8;
//     _Bool isEqual = (p == q); // Equal to (==)
//     _Bool isNotEqual = (p != q); // Not equal to (!=)
//     _Bool isGreater = (p > q); // Greater than
//     _Bool isLess = (p < q); // Less than 
//     _Bool isGreaterThanEqual = (p >= q); // Greater than equal to
//     _Bool isLessThanEqual = (p <= q); // Less than equal to

//     printf("Equal: %d\n", isEqual);
//     printf("Not Equal: %d\n", isNotEqual);
//     printf("Greater: %d\n", isGreater);
//     printf("Less: %d\n", isLess);
//     printf("Greater Than Equal: %d\n", isGreaterThanEqual);
//     printf("Less Than Equal: %d\n", isLessThanEqual);



//     return 0;

//     // bool or _Bool
    
// }

// 4) Logical Operators:

/*
- Used to perform logical operations.
Example '&&' '||' '!'
*/


// #include <stdio.h>

// int main()
// {
    // Logical AND

    // int x = 5, y = -5;
    // if(x > 0 && y > 0)
    // {
    //     printf("Both x and y are positive.\n");
    // }
    // else
    // {
    //     printf("At least one of x or y is not positive.\n");
    // }

    // Logical OR

    // int a = -8, b = 9; 
    // if(a > 0 || b > 0) // True || False => True
    // {
    //     printf("At least one of a or b is positive.\n");
    //     // Atleast 1 = 1 and more than 1 
    // }
    // else
    // {
    //     printf("Neither a nor b is positive.\n");
    // }

    // Logical NOT 

    // int flag = 0;

    // if(!flag)
    // {
    //     printf("Flag is flase.\n");
    // }
    // else
    // {
    //     printf("Flag is True");
    // }

//     return 0;
// }

// 5) Increment and Decrement Operators:

/*
- Increment (++) increases the value by 1, and 
decrement (--) decreases it by 1.

Example: 

int count = 0;
count++; // count is now 1

int count = 10;
count--; //

*/

// # include <stdio.h>

// int main()
// {

//     int num = 0;

//     // Increment operation
//     // printf("Original value of num: %d\n", num);
//     // num++; // Increment by 1
//     // printf("After increment: %d\n", num);

//     // // Decrement operation
//     // num--;
//     // printf("After decrement: %d\n", num);

//     // Increment and Decrement in expressions

//     // int a = 10, b;
//     // b = a++; 
//     // printf("a: %d, b: %d\n", a,b);

//     int a = 10, b;
//     b = ++a; // Increment 'a' before assigning to 'b'
//     printf("a: %d, b: %d\n", a,b);

//     // a++ or ++b

//     return 0;
// }

// 6) Conditional Operator (Ternary operator)

/*

#1) A shorthand for an 'if-else' statement
#2) Example: 
'condition ? expression_if_true : expression_if_false'

# Example:

int a = 10, b = 5;
int max = (a > b) ? a : b; // max wil be 10

*/

// #include <stdio.h>

// int main()
// {
//     int age;

//     // take input 
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     // ternary operator

//     // Question => if you are 18+ or equal to 18 you can vote else not
//     // 'condition ? expression_if_true : expression_if_false'

//     printf((age>=18)?"you can vote\n":"you can not vote\n");

//     (age>=18)?printf("you can vote\n"):printf("you can not vote\n");

//     return 0;
// }

// 7) Precedence of Operators:

/*
#1) Defines the order in which operations are performed
#2) Parantheses '()' can be used to override the default precedence

# Example: 

int result = 2 + 3 * 4;  #20 # 3*4 = 12 + 2 = 14

// result will be 14 (due to multiplication having higher precedence)

*/

// # include <stdio.h>

// int main()
// {
//     int result1 = (2 + 3) * 4;
//     int result2 = 2 + 3 * 4;
//     printf("%d\n",result1);
//     printf("%d\n",result2);

//     return 0; 

//     // BODMAS => Brackets, Order of power or roots , Division, Multiplication, Addition, Subtraction
// }