# C - More functions, more nested loops
***
In this project I got to learn about the following:
* Nested loops and how to use them
* Function and how do you use functions
* The difference between a declaration and a definition of a function
* Prototype
* Scope of variables
* The gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* Header files and how to to use them with #include

## Tasks:
_**0. isupper**_
* [0-isupper.c](./0-isupper.c): A function that checks for uppercase character.
   * Prototype: int _isupper(int c);
   * Returns 1 if c is uppercase
   * Returns 0 otherwise
   * FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

_**1. isdigit**_
* [1-isdigit.c](./1-isdigit.c): A function that checks for a digit (0 through 9).
   * Prototype: int _isdigit(int c);
   * Returns 1 if c is a digit
   * Returns 0 otherwise
   * FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

_**2. Collaboration is multiplication**_
* [2-mul.c](./2-mul.c): A function that multiplies two integers.
   * Prototype: int mul(int a, int b);
    
_**3. The numbers speak for themselves**_
* [3-print_numbers.c](./3-print_numbers.c): A function that prints the numbers, from 0 to 9, followed by a new line.
   * Prototype: void print_numbers(void);
   * You can only use _putchar twice in your code
    
_**4. I believe in numbers and signs**_
* [4-print_most_numbers.c](./4-print_most_numbers.c): A function that prints the numbers, from 0 to 9, followed by a new line.
   * Prototype: void print_most_numbers(void);
   * Do not print 2 and 4
   * You can only use _putchar twice in your code
    
**_5. Numbers constitute the only universal language_**
* [5-more_numbers.c](./5-more_numbers.c): A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
   * Prototype: void more_numbers(void);
   * You can only use _putchar three times in your code

    
_**6. The shortest distance between two points is a straight line**_
* [6-print_line.c](./6-print_line.c): A function that draws a straight line in the terminal.
   * Prototype: void print_line(int n);
   * You can only use _putchar function to print
   * Where n is the number of times the character _ should be printed
   * The line should end with a \n
   * If n is 0 or less, the function should only print \n

_**7. I feel like I am diagonally parked in a parallel universe**_
* [7-print_diagonal.c](./7-print_diagonal.c): A function that draws a diagonal line on the terminal.
   * Prototype: void print_diagonal(int n);
   * You can only use _putchar function to print
   * Where n is the number of times the character \ should be printed
   * The diagonal should end with a \n
   * If n is 0 or less, the function should only print a \n

**_8. You are so much sunshine in every square inch_**
* [8-print_square.c](./8-print_square.c): A function that prints a square, followed by a new line.
   * Prototype: void print_square(int size);
   * You can only use _putchar function to print
   * Where size is the size of the square
   * If size is 0 or less, the function should print only a new line
   * Use the character # to print the square

**_9. Fizz-Buzz_**
   * The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.
* [9-fizz_buzz](./9-fizz_buzz): A program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
   * Each number or word should be separated by a space
   * You are allowed to use the standard library
    
**_10. Triangles_**
* [10-print_triangle.c](./10-print_triangle.c): A function that prints a triangle, followed by a new line.
   * Prototype: void print_triangle(int size);
   * You can only use _putchar function to print
   * Where size is the size of the triangle
   * If size is 0 or less, the function should print only a new line
   * Use the character # to print the triangle

_**11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic**_
   * The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
* [100-prime_factor.c](./100-prime_factor.c): A program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
   * You are allowed to use the standard library
   * Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm

**_12. Numbers have life; they're not just symbols on paper_**
* [101-print_numbers.c](./10-print_numbers.c): A function that prints an integer.
   * Prototype: void print_number(int n);
   * You can only use _putchar function to print
   * You are not allowed to use long
   * You are not allowed to use arrays or pointers
   * You are not allowed to hard-code special values
***
* [main.h](./main.h): Contains all my function prototypes
* [_putchar.c](./_putchar.c): Writes to standard input and output
