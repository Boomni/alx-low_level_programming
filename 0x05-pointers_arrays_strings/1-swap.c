#include "main.h"

/**
 * swap_int - Entry point after main
 * Description: Swaps int a and int b
 * @a: integer passed
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

