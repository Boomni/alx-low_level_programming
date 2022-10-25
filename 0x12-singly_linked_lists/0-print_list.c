#include "lists.h"

/**
 * print_list - called from main
 * Description: Prints all the elements of a list_t list.
 * @h: pointer passed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	char *str;

	if (str == NULL)
		printf("[0] (nil)");
	else
		printf("[%lu] %s", strlen(str), str);

	return(0);
}

