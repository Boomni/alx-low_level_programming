#include "main.h"

/**
 * _strlen - returns length of a string
 * 
 * @s: character string passed
 *
 * Return: String length
 */
int _strlen(char *s)
{
	unsigned long int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

