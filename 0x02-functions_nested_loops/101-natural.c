/* Author: Jonathan Boomni */

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point atfer main
 * Description:  prints sum of all multiples of 3 or 5 below 1024
 * Return: sum
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 2; n < 1024; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
}

