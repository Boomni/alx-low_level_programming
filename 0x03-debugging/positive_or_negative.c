#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
}
