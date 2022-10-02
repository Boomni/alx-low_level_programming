#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates a string
 * @dest: designation
 * @src: character source
 * @n: int passed
 * Return: designation
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

