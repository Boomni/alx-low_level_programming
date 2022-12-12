#include "main.h"

/**
 * _strchr - called form main
 * @s: pointer to c
 * @c: char
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
