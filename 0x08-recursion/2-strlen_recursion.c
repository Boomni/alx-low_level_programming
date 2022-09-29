#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - called from main
 * Description: Prints length of a string
 * @s: String passed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

