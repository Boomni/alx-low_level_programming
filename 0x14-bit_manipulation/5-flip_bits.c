#include "main.h"

/**
 * flip_bits - returns the number of bits need
 * to flip to get from one number to another
 *
 * @n: number to toggle
 * @m: number to toggle with
 *
 * Return: bit number flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int toggle = n ^ m;
	int count = 0;

	while (toggle > 0)
	{
		count++;
		toggle &= (toggle - 1);
	}
	return (count);
}

