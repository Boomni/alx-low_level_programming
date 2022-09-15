#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - Called from main
 * Description: prints numbers 0 to 9 followed by a newline
 * and does not print 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
			putchar(x + '0');
	}
	putchar('\n');
}

