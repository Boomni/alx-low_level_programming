#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint list
 *
 * @head: pointer to pointer to the first element passed to node
 * @n: int data to be added
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

