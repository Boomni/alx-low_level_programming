/* Author: Jonathan Boomni */
#include <stdio.h>

/**
 * main - prints first 50 numbers in fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, n3;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%li", n3);

		n1 = n2;
		n2 = n3;

		if (n3 == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

