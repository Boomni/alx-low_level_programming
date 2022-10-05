/* Author: Jonathan Boomni */
#include <stdio.h>

/**
 * main - prints first 50 numbers in fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int n = 50;
	int i;
	int n1 = 0;
	int n2 = 1;
	int n3;

	for (i = 1; i <= n; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%i,", n3);
	}
	printf("\n");
	return (0);
}

