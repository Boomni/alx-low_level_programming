#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint list
 *
 * @head: pointer to pointer to the first element passed to node
 * @n: int data to be added
 *
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	/*place new_node first if head is NULL*/
	if (temp == NULL)
		*head = new_node;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (temp->next != NULL)
			temp = temp->next;	/*go to the last node*/

		/*place our new node at the end*/
		temp->next = new_node;
	}

	return (*head);
}

