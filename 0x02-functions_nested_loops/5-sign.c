/* Author: Jonathan Boomni */

#include "main.h"

/**
 * print_sign - Entry point after going through main
 * @n: the integer value it receives
 * Description: Prints the sign of a number
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

