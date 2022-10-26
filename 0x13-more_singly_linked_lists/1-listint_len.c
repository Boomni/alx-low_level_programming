#include "lists.h"

/**
 * listint_len - returns the number of elements is listint list
 *
 * @h: pointer passed
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node_count++;
	}

	return (node_count);
}

