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
	char *r_ptr = s;
	while (*(r_ptr + 1) != '\0')
		r_ptr++;

	while (r_ptr > s)
	{
		char tmp = *r_ptr;
		*r_ptr-- = *s;
		*s++ = tmp;
	}
}
