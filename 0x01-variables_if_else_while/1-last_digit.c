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
	int n, z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* to get the last digit of a number, we find the module of that number */
	z = n % 10;

	if (z > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, z);
	else if (z == 0)
		printf("Last digit of %i is %i and is 0\n", n, z);
	else if (z < 6 && z != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, z);
	return (0);
}

