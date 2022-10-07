# **C - Functions, nested loops**

In this project. I learned about the following:
* Nested loops and how to use them
* Function and how to use functions
* The difference between a declaration and a definition of a function
* Prototype
* Scope of variables
* The `gcc` flags `-Wall` `-Werror` `-pedantic` `-Wextra` `-std=gnu89`
* Header files and how to to use them with `#include`

## Tasks:
***
_**0. _putchar**_
  * Write program that prints `_putchar`, followed by a new line.
    * The program should return `0`
      * Solution: [0-putchar.c](./0-putchar.c):

_**1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**_
  * Write a function that prints the alphabet, in lowercase, followed by a new line.
    * Prototype: `void print_alphabet(void);`
    * You can only use `_putchar` twice in your code
      * Solution file: [1-alphabet.c](./1-alphabet.c)
      * Test file: [1-main.c](./1-main.c)

_**2. 10 x alphabet**_
  * Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
    * Prototype: `void print_alphabet_x10(void);`
    * You can only use `_putchar` twice in your code
      * Solution file: [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
      * Test file: [2-main.c](./2-main.c)

_**3. islower**_
  * Write a function that checks for lowercase character.
     * Prototype: `int _islower(int c);`
     * Returns `1` if c is lowercase
     * Returns `0` otherwise
     * FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.
       * Solution file: [3-islower.c](./3-islower.c)
       * Test file: [3-main.c](./3-main.c)

_**4. isalpha**_
  * Write a function that checks for alphabetic character.
    * Prototype: `int _isalpha(int c);`
    * Returns `1` if c is a letter, lowercase or uppercase
    * Returns `0` otherwise
    * FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.
      * Solution file: [4-isalpha.c](./4-isalpha.c)
      * Test file: [4-main.c](./4-main.c)

_**5. Sign**_
  * Write a function that prints the sign of a number.
    * Prototype: `int print_sign(int n);`
    * Returns `1` and prints `+` if n is greater than zero
    * Returns `0` and prints `0` if n is zero
    * Returns `-1` and prints `-` if n is less than zero
      * Solution file: [5-sign.c](./5-sign.c)
      * Test file: [5-main.c](./5-main.c)

_**6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**_
  * Write a function that computes the absolute value of an integer.
    * Prototype: `int _abs(int);`
    * FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.
      * Solution file: [6-abs.c](./6-abs.c)
      * Test file: [6-main.c](./6-main.c)

_**7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**_
  * Write a function that prints the last digit of a number.
    * Prototype: `int print_last_digit(int);`
    * Returns the value of the last digit
      * Solution file: [7-print_last_digit.c](./7-print_last_digit.c)
      * Test file: [7-main.c](./7-main.c)
    
_**8. I'm federal agent Jack Bauer, and today is the longest day of my life**_
  * Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
    * Prototype: `void jack_bauer(void);
      * Solution file: [8-24_hours.c](./8-24_hours.c)
      * Test file: [8-main.c](./8-main.c)

_**9. Learn your times table**_
 * Write a function that prints the 9 times table, starting with 0.
    * Prototype: `void times_table(void);`
      * Solution file: [9-times_table.c](./9-times_table.c)
      * Test file: [9-main.c](./9-main.c)

_**10. a + b**_
 * Write a function that adds two integers and returns the result.
    * Prototype: int add(int, int);
      * Solution file: [10-add.c](./10-add.c)
      * Test file: [10-main.c](./10-main.c)

_**11. 98 Battery Street, the OG**_
 * Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
   * Prototype: `void print_to_98(int n);`
   * Numbers must be separated by a comma, followed by a space
   * Numbers should be printed in order
   * The first printed number should be the number passed to your function
   * The last printed number should be `98`
   * You are allowed to use the standard library
      * Solution file: [11-print_to_98.c](./11-print_to_98.c)
      * Test file: [11-main.c](./11-main.c)

_**12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**_
 * Write a function that prints the `n` times table, starting with `0`.
   * Prototype: `void print_times_table(int n);`
   * If `n` is greater than `15` or less than `0` the function should not print anything
      * Solution file: [100-times_table.c](./100-times_table.c)
      * Test file: [100-main.c](./100-main.c)
    
_**13. Nature made the natural numbers; All else is the work of women**_
 * Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
   * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   * You are allowed to use the standard library
       * Solution file: [101-natural.c](./101-natural.c)
    
_**14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**_
 * Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
   * The numbers must be separated by comma, followed by a space , 
   * You are allowed to use the standard library
       * Solution file: [102-fibonacci.c](./102-fibonacci.c)

_**15. Even Liber Abbaci**_
 * write a program that finds and prints the sum of the even-valued terms, followed by a new line.
   * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000
      * Solution file: [103-fibonacci.c](./103-fibonacci.c)

_**16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**_
 * Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
   * The numbers should be separated by comma, followed by a space ,
   * You are allowed to use the standard library
   * You are not allowed to use any other library (You can’t use GMP etc…)
   * You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
   * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
      * Solution file: [104-fibonacci.c](./104-fibonacci.c)
