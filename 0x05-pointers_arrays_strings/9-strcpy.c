#include "main.h"

/**
 * _strcpy - Entry point after main
 * Description: Copies src dest
 * @dest: Character passed
 * @src: Character passed
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
