#include <stdio.h>

int main() 
{
  printf("Hello World!\n");
  printf("This is my first program in C Programming Language.\n");

  int myNum = 69;
  float myFloatNum = (float)(6.90);
  char myLetter = 'F';

  printf("This is my favorite number: %d\n", myNum);
  printf("This is my favorite float number: %f\n", myFloatNum);
  printf("This is my favorite letter: %c\n", myLetter);

  int Age = 21;
  int votingAge = 18;

  // If Else Statement in C Programming explained
  // if (Age >= votingAge) { 
  //   printf("Old enough to vote!\n");
  // } else {
  //   printf("Not old enough to vote.\n");
  // }

  // IF Else If Statement in C Programming explained
  // int time = 15;
  // if (time < 10) {
  //   printf("Good morning.\n");
  // } else if (time < 20) {
  //   printf("Good day.\n");
  // } else {
  //   printf("Good evening.\n");
  // }
  
  // Switch Statement in C Programming explained with scanf
  // int x;
  // printf("enter your choice - ");
  // scanf("%i", &x);
  // switch (x) {
  //   case 1:
  //     printf("Monday");
  //     break;
  //   case 2:
  //     printf("Tuesday");
  //     break;
  //   case 3:
  //     printf("Wednesday");
  //     break;
  //   case 4:
  //     printf("Thursday");
  //     break;
  //   case 5:
  //     printf("Friday");
  //     break;
  //   case 6:
  //     printf("Saturday");
  //     break;
  //   case 7:
  //     printf("Sunday");
  //     break;
  // }

  // For loop condition is defined first and all together 
  // int F = 0;
  // for   (F = 0; F <= 10; F = F + 2) 
  // {
  // printf("%d\n", F);
  // }

  // While loop limit is defined first and then the condition is defined under {}
  // int W = 0;
  // while (W < 5) 
  // {
  //   printf("%d\n", W);
  //   W++;
  // }

   return 0;

}

// Header lib Explained
// <stdio.h> is a header file that contains the standard input/output library functions.
// <stdbool.h> is a header file that defines bool, true and false as macro.

// Internal Working of C Program explained
// Int main() is the main function where the program execution begins.
// print f() is a function that prints the given message inside the quotation marks.
// return 0; is a statement that returns the value 0 to the operating system.
// \n represents the new line. Note it can be used multiple times.
// \t	Creates a horizontal tab	
// \\	Inserts a backslash character (\)	
// \"	Inserts a double quote character
// "%" is a placeholder for the variable "d" is for integer
// "%lu" can print bytes of Data types in C Programming Eg: printf("%lu\n", sizeof(myInt))

// Data Types in C Programming explained
// int - stores integers (whole numbers), without decimals, such as 123 or -123,
// myNum is a variable of int type
// float - stores floating point numbers, with decimals, such as 19.99 or -19.99,
// myFloatNum is a variable of float type
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes, 
// myLetter is a variable of char type

// Opearators in C Programming explained
// +	Addition	Adds together two values	x + y	
// -	Subtraction	Subtracts one value from another	x - y	
// *	Multiplication	Multiplies two values	x * y	
// /	Division	Divides one value by another	x / y	
// %	Modulus	Returns the division remainder	x % y	
// ++	Increment	Increases the value of a variable by 1	++x	
// --	Decrement	Decreases the value of a variable by 1	--x
// =	  x = 5 	  x = 5	
// +=	  x += 3	  x = x + 3	
// -=	  x -= 3	  x = x - 3	
// *=	  x *= 3	  x = x * 3	
// /=	  x /= 3	  x = x / 3	
// %=	  x %= 3	  x = x % 3
// ==	Equal to	x == y	
// !=	Not equal	x != y	
// >	Greater than	x > y	
// <	Less than	x < y	
// >=	Greater than or equal to	x >= y	
// <=	Less than or equal to	x <= y

// logical operators in C Programming explained
// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
// !	  Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

// Expert Level Operators in C Programming explained
// &=	  x &= 3	  x = x & 3	
// |=	  x |= 3	  x = x | 3	
// ^=	  x ^= 3	  x = x ^ 3	
// >>=	x >>= 3	  x = x >> 3	
// <<=	x <<= 3   x = x << 3

// If, else and else if statements in C Programming explained
// to use if, else statements first we need to declare the variables 
// then we can use the if, else statements 
// You have already learned that C supports the usual logical conditions from mathematics:
// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b
// You can use these conditions to perform different actions for different decisions.
// C has the following conditional statements:
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed

