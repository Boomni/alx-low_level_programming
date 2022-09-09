#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Start Point
 * Description: checks the last of a random integer n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit %i is and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit %i is and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit %i is and is less than 6 and not 0\n", n);
	return (0);
}

