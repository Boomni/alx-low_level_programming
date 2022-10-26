/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int a, b;
	/* a for first number, b for second number */

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b) /* if a is smaller ie. a in 12 and 21 */
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

