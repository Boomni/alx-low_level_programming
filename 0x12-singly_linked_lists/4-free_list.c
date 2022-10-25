#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node.
	*/
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

