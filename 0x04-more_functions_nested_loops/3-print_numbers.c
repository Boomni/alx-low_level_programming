#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Called from main
 * Description: prints numbers 0 to 9 followed by a comma
 * Return: 0
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x);
	putchar('\n');
}

