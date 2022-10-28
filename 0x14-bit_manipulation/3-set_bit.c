#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number to edit
 *
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 on success, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else
	{
		(*n) |= (1 << index);
		if ((*n) & (1 << index))
			return (1);
	}
	return (0);
}
