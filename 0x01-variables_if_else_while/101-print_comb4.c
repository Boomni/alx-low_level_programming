
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
			if (a < b && b < c)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
					if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

