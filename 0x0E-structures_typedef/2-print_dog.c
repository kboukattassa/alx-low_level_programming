#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - func that prints a struct dog
 * @d: var of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
	else
	{
		return;
	}

}
