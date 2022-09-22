#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - called from main
 * @str: string passed
 * Description: changes string to upper
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i=0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}

