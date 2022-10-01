#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index, result;
	result = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (index = 1; index < argc; index++)
			printf("%i\n", result);
	return (0);
}

