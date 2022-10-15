#include "variadic_functions.h"

/**
 * print_all - a function that prints anything, followed by a new line
 *
 * @format: start of input variables
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	int x, y;
	char *str;

	/* iterate the argument list from the start */
	va_start(args, format);

	for (i = 0; i < format; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		x = va_arg(args, int)
		if (x)
			printf("%d", x);
		y = va_arg(args,float)
		if (y)
			printf("%f", y);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(args);
	printf("\n");
}

