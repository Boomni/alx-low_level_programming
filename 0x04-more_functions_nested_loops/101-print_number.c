#include "main.h"
#include <stdio.h>
#include <stdout.h>

/**
* print_number - print integer
* @n: integer
* Return: Always 0.
*/

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);

_putchar((num % 10) + '0');
}
