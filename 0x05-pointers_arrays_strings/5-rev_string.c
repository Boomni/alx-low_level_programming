#include "main.h"

/**
 * rev_string - Reverses a string
 * 
 * @s: character string passed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	unsigned long int len, end, begin = 0;
	char r[30];

	while (s[len] != '\0')
		len++;
	end = len - 1;

	for (begin = 0; begin < len; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
}
