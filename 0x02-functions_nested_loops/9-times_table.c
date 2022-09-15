/* Author: Jonathan Boomni */

#include "main.h"

/**
 * times_table - Entry point after main is read
 * Description: Prints the nine times table starting with zero
 * Return: void
 */
void times_table(void)
{
	int a, b, product;
	a = 0;

	while (a <= 109)
	{
		product = a * b;

		for (b = 0; b <= 10; b++)
		{
			printf("%d", product);
		}
		a++;
	}
}
