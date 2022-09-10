
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
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
		if (a < b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(' ');
			}
				for (c = 0; c < 10; c++)
				{
					for (d = 0; d < 10; d++)
					{
					if (c < d)
					{
						putchar(c + '0');
						putchar(d + '0');
						if (a != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
					}
				
				}
		}
		}
	}
	putchar('\n');
	return (0);
}


