#include "main.h"

/**
 * _isdigit - Called from main
 * @c: Integer declared
 * Description: Detects digits 0 to 9 with ascii
 * Return: 1 for digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
