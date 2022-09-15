#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * more_numbers - Called from main
 * Description: prints numbers 0 to 14
 * ten times followed by a newline
 * Return: 0
 */
void more_numbers(void)
{
	char x = 0;
	char b;

	while (x <= 10)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(b);
		}
		x++;
		putchar('\n');
	}
	putchar('\n');
}

