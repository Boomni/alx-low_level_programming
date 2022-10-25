#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @str: string to be added
 * @head: pointer passed
 *
 * Return: 
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/**
	 * initialize the next addr of new_node
	 * to NULL if head is NULL, if it's not
	 * move the first node to the addr of new_node
	 * ->next hence adding new_node at the beginning
	 *  of the list
	*/
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = str_len;
	*head = new_node;

	return (*head);
}

