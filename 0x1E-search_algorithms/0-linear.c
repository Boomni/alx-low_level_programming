#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * Description: uses the Linear search algorithm
 *
 * @array: the array to search
 * @size: The size of the array
 * @value: the value that is being searched for
 *
 * Return: First index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
