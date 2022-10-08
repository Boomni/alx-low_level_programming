# C - More pointers, arrays and strings
***
Doing these task I learned about:
* Pointers and how to use them
* Arrays and how to use them
* The differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Tasks
___
_**0. strcat**_
* Write a function that concatenates two strings.
   * Prototype: `char *_strcat(char *dest, char *src);`
   * This function appends the `src` string to the `dest` string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte
   * Returns a pointer to the resulting string `dest`
   * FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.
     * Solution file: [0-strcat.c](./0-strcat.c)
    
**_1. strncat_**
* Write a function that concatenates two strings.
   * Prototype: `char *_strncat(char *dest, char *src, int n);`
   * The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`; and `src` does not need to be null-terminated if it contains `n` or more bytes
   * Return a pointer to the resulting string `dest`
   * FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.
     * Solution file: [1-strncat.c](./1-strncat.c)
    
**_2. strncpy_**
* Write a function that copies a string.
  * Prototype: `char *_strncpy(char *dest, char *src, int n);`
  * Your function should work exactly like `strncpy`
  * FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.
    * Solution file: [2-strncpy.c](./2-strncpy.c)
    
_**3. strcmp**_
Write a function that compares two strings.
Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
File: 3-strcmp.c
    
**_4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy_**
Write a function that reverses the content of an array of integers.
Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array
File: 4-rev_array.c
    
5. Always look up
Write a function that changes all lowercase letters of a string to uppercase.
Prototype: char *string_toupper(char *);
File: 5-string_toupper.c
    
6. Expect the best. Prepare for the worst. Capitalize on what comes
Write a function that capitalizes all words of a string.
Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
File: 6-cap_string.c
    
7. Mozart composed his music not for the elite, but for everybody
Write a function that encodes a string into 1337.
Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation
File: 100-rot13.c
    
9. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.
Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values
File: 101-print_number.c
     
10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
You are not allowed to use the variable a in your new line of code
You are not allowed to modify the variable p
You can only write one statement
You are not allowed to use ,
You are not allowed to code anything else than the line of expected line of code at the expected line
Your code should be written at line 19, before the ;
Do not remove anything from the initial code (not even the comments)
and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
You are allowed to use the standard library
File: 102-magic.c
    
11. It is the addition of strangeness to beauty that constitutes the romantic character in art
Write a function that adds two numbers.
Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
Where n1 and n2 are the two numbers
r is the buffer that the function will use to store the result
size_r is the buffer size
The function returns a pointer to the result
You can assume that you will always get positive numbers, or 0
You can assume that there will be only digits in the strings n1 and n2
n1 and n2 will never be empty
If the result can not be stored in r the function must return 0
File: 103-infinite_add.c
     
12. Noise is a buffer, more effective than cubicles or booth walls
Write a function that prints a buffer.
Prototype: void print_buffer(char *b, int size);
The function must print the content of size bytes of the buffer pointed by b
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
Each line ends with a new line \n
If size is 0 or less, the output should be a new line only \n
You are allowed to use the standard library
The output should look like the following example, and formatted exactly the same way:
File: 104-print_buffer.c
     
