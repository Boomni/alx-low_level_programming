#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point after main
 * Description: Prints n elements of an array of integers
 * followed by a new line.
 * Author: Jonathan Boomni
 * @a: integer array passed
 * @n: number of elements in array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
