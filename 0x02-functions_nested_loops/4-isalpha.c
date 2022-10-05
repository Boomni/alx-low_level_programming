/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _isalpha - Entry point after going through main
 * @c: the integer value it receives
 * Description: checks for alphabetetic character
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
