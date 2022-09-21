#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - concatenates a string
 * @dest: string designation
 * @src: string source
 * @n: number of bytes
 * Return: designation
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

