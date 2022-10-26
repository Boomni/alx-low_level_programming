#include "lists.h"

size_t print_listint(const listint_t *h);
/**
 * print_listint - prints the elements is listint list
 *
 * @h: pointer passed
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		/*if int is 0 printf 0*/
		if (h->n == 0)
			printf("%d\n", 0);
		else
			printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node_count++;
	}

	/*print for the last node*/
	printf("%d\n", h->n);

	return (node_count);
}

