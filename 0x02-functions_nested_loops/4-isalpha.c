/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _isalpha - Entry point after going through main
 * @c: the integer value it receives
 * Description: Make the alphabet 10 times
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	char a;
	char b;


	for ((a = 'a'; a <= 'z'; a++) && (b = 'A'; b <= 'Z'; b++))
	{
		if ((b == c) || (a == c))
			return (1);
	}
	return (0);
}
