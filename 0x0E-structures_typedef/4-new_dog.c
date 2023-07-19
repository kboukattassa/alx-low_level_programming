#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, len1 = 0, len2 = 0;
	char *a, *b;

	for (i = 0; name[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		len2++;
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * (len1 + 1));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = name[i];
	}
	a[i] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc(sizeof(char) * (len2 + 1));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		b[i] = owner[i];
	}
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
