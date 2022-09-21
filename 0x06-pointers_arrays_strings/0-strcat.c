#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates a string
 * @dest: string designation
 * @src: string source
 * Return: designation
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

