#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes a varible of type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
