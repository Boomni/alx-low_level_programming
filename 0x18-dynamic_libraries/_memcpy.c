#include "main.h"

/**
 * _memcpy - called from main
 * Description: copies memory area
 * @dest: designation character passed
 * @src: source character passed
 * @n: An unsigned integer passed
 * Return: A character value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
