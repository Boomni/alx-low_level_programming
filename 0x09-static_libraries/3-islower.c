/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _islower - Entry point after going through main
 * @c: the integer value it receives
 * Description: Make the alphabet 10 times
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	int a;


	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}

