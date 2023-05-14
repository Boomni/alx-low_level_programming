#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *
 * Description: uses the Binary search algorithm
 *
 * @array: the array to search
 * @size: The number of elements in the array
 * @value: the value that is being searched for
 *
 * Return: First index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");

		mid = ((left + right) / 2);

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
