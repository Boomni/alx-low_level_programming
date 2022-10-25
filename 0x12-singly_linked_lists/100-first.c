#include<stdio.h>

/* Apply the constructor attribute to myStartupFun()
 * so that itis executed before main()
 */
void myStartupFun (void) __attribute__ ((constructor));

/* implementation of myStartupFun */
void myStartupFun (void)
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main (void)
{
	printf ("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return 0;
}

