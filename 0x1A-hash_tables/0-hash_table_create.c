#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free (ht);
		return (NULL);
	}

	/* Set all elements in the array to NULL */
	for (i = 0; i < size; i++)
	    ht->array[i] = NULL;

	ht->size = size;

	return (ht);
}
