# C - More functions, more nested loops
***
In this project I got to learn the following:
* Nested loops and how to use them
* Function and how do you use functions
* The difference between a declaration and a definition of a function
* Prototype
* Scope of variables
* The gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* Header files and how to to use them with #include

## Tasks:
_**0. isupper**_
* [](): A function that checks for uppercase character.
   * Prototype: int _isupper(int c);
   * Returns 1 if c is uppercase
   * Returns 0 otherwise
   * FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

_**1. isdigit**_
* [](): A function that checks for a digit (0 through 9).
   * Prototype: int _isdigit(int c);
   * Returns 1 if c is a digit
   * Returns 0 otherwise
   * FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

_**2. Collaboration is multiplication**_
Write a function that multiplies two integers.
Prototype: int mul(int a, int b);
    
3. The numbers speak for themselves
Write a function that prints the numbers, from 0 to 9, followed by a new line.
Prototype: void print_numbers(void);
You can only use _putchar twice in your code
    
4. I believe in numbers and signs
Write a function that prints the numbers, from 0 to 9, followed by a new line.
Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code
    
5. Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
Prototype: void more_numbers(void);
You can only use _putchar three times in your code

    
6. The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.
Prototype: void print_line(int n);
You can only use _putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n

7. I feel like I am diagonally parked in a parallel universe
Write a function that draws a diagonal line on the terminal.
Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n

8. You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.
Prototype: void print_square(int size);
You can only use _putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square

9. Fizz-Buzz
mandatory
Score: 65.0% (Checks completed: 100.0%)
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

Each number or word should be separated by a space
You are allowed to use the standard library
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x04-more_functions_nested_loops
File: 9-fizz_buzz.c
    
10. Triangles
mandatory
Score: 50.0% (Checks completed: 100.0%)
Write a function that prints a triangle, followed by a new line.
Prototype: void print_triangle(int size);
You can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle
julien@ubuntu:~/0x04$ cat 10-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x04-more_functions_nested_loops
File: 10-print_triangle.c
    
11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
#advanced
Score: 50.0% (Checks completed: 100.0%)
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

You are allowed to use the standard library
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x04-more_functions_nested_loops
File: 100-prime_factor.c
    
12. Numbers have life; they're not just symbols on paper
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints an integer.

Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values
julien@ubuntu:~/0x04$ cat 101-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x04$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x04$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x04-more_functions_nested_loops
File: 101-print_number.c
     
Copyright © 2022 ALX, All rights reserved.
