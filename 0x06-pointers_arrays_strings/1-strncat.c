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
	strncat(dest, src, n);
	return (dest);
}

