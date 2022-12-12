#include "main.h"

/**
 * _strcmp - compairs two string
 * Description: compairs two strings
 * @s1: string passed
 * @s2: string passed
 * Return: differenc btw ascii values
 */
int _strcmp(char *s1, char *s2)
{
/*
 * The condition simply says keep looping until the end of
 * the string is not reached and corresponding characters are same.
 */
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
/*
 * The expression *strg1 - *strg2 evaluates the difference of the ASCII
 * value of characters.
*/
	return (*s1 - *s2);
}
