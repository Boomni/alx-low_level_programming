/* Author: Jonathan Boomni */

#include "main.h"

/**
 * print_last_digit - Entry point after going through main
 * @n: the integer value it receives
 * Description: Prints the last digit of an integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
