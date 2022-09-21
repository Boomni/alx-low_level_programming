#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates a string
 * @dest: string designation
 * @src: string source
 * @n: number of bytes
 * Return: designation
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

