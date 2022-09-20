#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Entry point after main
 * Description: Reverses a string
 * Author: Jonathan Boomni
 * @s: character string passed
 * Return: 0
 */
void rev_string(char *s)
{
	char *a = s;

	while (*(a + 1) != '\0')
		a++;

	while (a > s)
	{
		char tmp = *a;
		*a-- = *s;
		*s++ = tmp;
	}
}
