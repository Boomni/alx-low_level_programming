#include "dog.h"
#include <stdio.h>

/**
 * init_dog - called from main
 * Description: initialized vaiable of type struct dog
 * @d:
 *
 *
 */
 void init_dog(struct dog *d, char *name, float age, char *owner)
 {
 	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}

