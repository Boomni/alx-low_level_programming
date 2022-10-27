#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number passed
 *
 * Return: binary equivalent
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}

