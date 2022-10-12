#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: array passed
 * @size: size passed
 * @cmp: pointer to function
 * Returns: int or -1 if size is lessthan 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

