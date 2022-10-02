#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates a string
 * Return: designation
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

