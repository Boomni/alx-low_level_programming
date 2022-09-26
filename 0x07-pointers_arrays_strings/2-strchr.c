#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - called form main
 * Decscription: locates a character string
 * @s: string passed
 * @c: character passed
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}

