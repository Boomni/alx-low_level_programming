#include "main.h"

#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: decimal equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int dec = 0;
	int val = 1;
	int i;

	/* iterate through the string backwards starting */
	/* from the element before the null byte to the first element */
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			dec += val;
		}
		val *= 2;
	}
	return (dec);
}

