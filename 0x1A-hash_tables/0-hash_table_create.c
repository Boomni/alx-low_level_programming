#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size of the array
 *
 * Returns: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
