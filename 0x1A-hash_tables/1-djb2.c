#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	/* Iterate over each character of the string */
	while ((c = *str++))
	{
		/* Update hash based on current character and previous value of hash */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
