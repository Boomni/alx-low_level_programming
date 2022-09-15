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
	char row = 0;
	char x;

	while (row < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				putchar('1');
			}
			putchar((x % 10) + '0');
		}
	row++;
		putchar('\n');
	}
}

