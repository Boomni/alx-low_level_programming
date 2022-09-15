#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - Called from main
 * @c: Integer declared
 * Description: Detects uppercase
 * Return: 1 for uppercase 0 for lowercase
 */
int _isupper(int c)
{
	if (c == 65 && c <= 90)
		return (1);
	return (0);
}

