#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - fuction that executed before main
 * as a result of the constructor attribute
 *
 * Return: nothing
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("(A tortoise, having pretty ");
	printf("good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

