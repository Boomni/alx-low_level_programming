#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		/**
		 * we iterate pointer next addr if its not NULL our temp addr
		 * points to the next addr or the next node.
		*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

