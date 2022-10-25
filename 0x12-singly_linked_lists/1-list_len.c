#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*return 0 as number of nodes*/
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

