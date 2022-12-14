#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of dlistint_t list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* declare a variable to hold the number of elements */
	size_t nodes = 0;
	/* while in start node (head) */
	while (h)
	{
		/* increment the node count as we progress into each node */
		nodes++;
		/* print the data in the node */
		printf("%d\n", h->n);
		/* move to next node */
		h = h->next;
	}
	return (nodes);
}
