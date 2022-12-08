#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: head of the dlistint_t list
 * @n: data to be added to the node created
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* initialize new node */
	dlistint_t *new, *last;

	/* allocate memory to new node */
	new = malloc(sizeof(dlistint_t));

	/* input data, since it's at end of list make it point to NULL */
	new->n = n;
	new->next = NULL;

	/* if linkedlist is empty make new node head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	else
	{
		last = *head;
		/* iterate to last node */
		while (last->next != NULL)
			last = last->next;
		/* make last point to new node and new node point to the previous(last) */
		last->next = new;
		new->prev = last;
		return (new);
	}
}
