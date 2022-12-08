#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: double pointer to first node
 * @n: data in the node added
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* initialize the new node */
	dlistint_t *new;

	/* allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* put data int the new node */
	new->n = n;
	/* make next of new node head and previous null */
	new->prev = NULL;
	new->next = *head;
	/* make previous of head the new node */
	if (*head != NULL)
		(*head)->prev = new;
	/* make head point to new node */
	*head = new;

	return (new);
}
