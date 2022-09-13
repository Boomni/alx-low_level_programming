/* Author: Jonathan Boomni */

#include "main.h"

/**
 * _islower - Entry point after going through main
 * Description: Make the alphabet 10 times
 * Return:(0) or (1)
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
