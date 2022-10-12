#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: array passed
 * @size: size passed
 * @cmp: pointer to function
 * Return: index of first element that matches with cmp
 * or -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 $$ array $$ cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

