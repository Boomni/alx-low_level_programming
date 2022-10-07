#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 * 
 */

void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		putchar('-');
		putchar(num + '0');
	}

	else if (num == 0)
		putchar(0);

	else 
		putchar(num + '0');
}

