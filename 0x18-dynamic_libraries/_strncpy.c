#include "main.h"

/**
 * _strncpy - concatenates a string
 * @dest: designation
 * @src: character source
 * @n: int passed
 * Return: designation
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
