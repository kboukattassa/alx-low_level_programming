#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct of dog
 * @Owner: name of owner
 * @Name: name of dog
 * @Age: age of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %d\n", d->age);
		if (d-owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
