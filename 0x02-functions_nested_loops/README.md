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
* **0. _putchar**
  * [0-putchar.c](./0-putchar.c): A program that prints `_putchar`, followed by a new line.
  * The program should return `0`


* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [1-alphabet.c](./1-alphabet.c): A function that prints the alphabet, in lowercase, followed by a new line.
  * Prototype: `void print_alphabet(void);`
  * You can only use `_putchar` twice in your code

* **2. 10 x alphabet**
  * [2-print_alphabet_x10.c](./2-print_alphabet_x10.c): A function that prints 10 times the alphabet, in lowercase, followed by a new line.
  * Prototype: `void print_alphabet_x10(void);`
  * You can only use `_putchar` twice in your code

* **3. islower**
  * [3-islower.c](./3-islower.c): A function that checks for lowercase character.
  * Prototype: `int _islower(int c);`
  * Returns `1` if c is lowercase
  * Returns `0` otherwise
  * FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

* **4. isalpha**
  * [4-isalpha.c](./4-isalpha.c): A function that checks for alphabetic character.
  * Prototype: `int _isalpha(int c);`
  * Returns `1` if c is a letter, lowercase or uppercase
  * Returns `0` otherwise
  * FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.


* **5. Sign**
  * [5-sign.c](./5-sign.c): A function that prints the sign of a number.
  * Prototype: `int print_sign(int n);`
  * Returns `1` and prints `+` if n is greater than zero
  * Returns `0` and prints `0` if n is zero
  * Returns `-1` and prints `-` if n is less than zero

    
* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**

  * [6-abs.c](./6-abs.c): A function that computes the absolute value of an integer.
  * Prototype: `int _abs(int);`
  * FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.


* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important*
 * [7-print_last_digit.c](./7-print_last_digit.c): A function that prints the last digit of a number.
 * Prototype: `int print_last_digit(int);`
 * Returns the value of the last digit

    
* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
 * [8-24_hours.c](./8-24_hours.c): A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
  * Prototype: `void jack_bauer(void);`

* **9. Learn your times table**
 * [5-sign.c](./5-sign.c): A function that prints the 9 times table, starting with 0.
 * Prototype: `void times_table(void);`
 * Format: see example
 ```terminal
 julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
```

* **10. a + b**
 * [10-add.c](./10-add.c):Write a function that adds two integers and returns the result.

Prototype: int add(int, int);

11. 98 Battery Street, the OG

 * [5-sign.c](./5-sign.c):Write a function that prints all natural numbers from n to 98, followed by a new line.

Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library

12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

 * [5-sign.c](./5-sign.c):Write a function that prints the n times table, starting with 0.

Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything
Format: see example

    
13. Nature made the natural numbers; All else is the work of women

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 
 * [5-sign.c](./5-sign.c):Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

You are allowed to use the standard library

    
14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A

 * [5-sign.c](./5-sign.c):Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers must be separated by comma, followed by a space , 
You are allowed to use the standard library

    
15. Even Liber Abbaci
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000
 * [5-sign.c](./5-sign.c):write a program that finds and prints the sum of the even-valued terms, followed by a new line.

    
16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+

 * [5-sign.c](./5-sign.c):Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers should be separated by comma, followed by a space ,
You are allowed to use the standard library
You are not allowed to use any other library (You can’t use GMP etc…)
You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for 1 and 2)
