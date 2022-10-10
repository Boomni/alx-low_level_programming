#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - called from main
 * Description: initialized vaiable of type struct dog
 * @d: pointer to struct
 * @name: dog name passed
 * @age: dog age passed
 * @owner: dog owner passed
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

