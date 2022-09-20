#include "main.h"

void puts2(char *str);

/**
 * main - check the code
 * Author:Jonathan Boomni
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
/**
 * puts2 - Entry point after main
 * Description: Prints every other character of a string
 * @str: character string passed
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
