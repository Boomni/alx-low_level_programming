#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to edit
 *
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 on success, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	if (*n & (1 << index))
		return (-1);
	else
		return (1);

	return (0);
}
