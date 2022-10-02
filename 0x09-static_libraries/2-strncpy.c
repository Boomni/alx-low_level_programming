#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - concatenates a string
 * Return: designation
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

