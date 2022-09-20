#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point after c
 * Description: Prints half of a string
 * Author: Jonathan Boomni
 * @str: String passed
 * Return: 0
 */
void puts_half(char *str)
{
    int i;

	for (i = 1; str[i] != '\0'; i++)
		;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
