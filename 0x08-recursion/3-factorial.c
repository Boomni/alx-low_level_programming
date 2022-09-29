#include "main.h"
#include <stdio.h>

/**
 * factorial - called from main
 * Description: Prints factorial of a number
 * @n: integer/number passed
 * Return: factorial of the integer passed
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

