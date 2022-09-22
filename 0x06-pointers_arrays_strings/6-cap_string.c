#include "main.h"

/**
 * cap_string - called from main
 * @str: string passed
 * Description: Capitalizes first letter of each word in a string
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			str[i] = toupper(str[i]);
		else if (str[i] == ' ')
			str[i + 1] = toupper(str[i + 1]);
		else if (str[i] == '\n')
			str[i + 1] = toupper(str[i + 1]);
		else if (str[i] == '\t')
			str[i + 1] = toupper(str[i + 1]);
		else if (str[i] == '.')
			str[i + 1] = toupper(str[i + 1]);
	}
	return (str);
}

