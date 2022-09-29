#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - called from main
 * Description: Prints string in reverse
 * @s: String passed
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

