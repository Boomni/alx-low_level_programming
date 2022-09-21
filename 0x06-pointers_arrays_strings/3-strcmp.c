#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - concatenates a string
 * @s1: string to compair
 * @s2: string to compair
 * Return: 
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

