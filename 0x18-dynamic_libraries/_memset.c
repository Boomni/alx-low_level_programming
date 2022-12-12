#include "main.h"

/**
 * _memset - entry point from main
 * Description: fills memory with a constant byte
 * @s: Char passed
 * @b: Char passed
 * @n: An unsigned integer passed
 * Return: A character value
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
