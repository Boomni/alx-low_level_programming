#include "variadic_functions.h"

/**
 * sum_them_all - called form main
 * Description: sums all its parameters
 * @n: parameters passed
 * Return: Sum total
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}

