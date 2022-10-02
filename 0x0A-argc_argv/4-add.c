#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	(void) argv;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0 || atoi(argv[i]) < 2147483647)
			{
				sum += atoi(argv[i]);
				printf("%i\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
		printf("0\n");
	return (0);
}

