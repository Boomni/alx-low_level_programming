/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _abs - Entry point after going through main
 * @n: the integer value it receives
 * Description: Prints the absolute value of an integer
 * Return: int
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

