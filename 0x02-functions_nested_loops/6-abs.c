/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 *
 * @n: integer passed
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}

