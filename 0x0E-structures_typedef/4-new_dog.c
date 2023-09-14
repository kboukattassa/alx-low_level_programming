#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - entry point
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 * @Description: --
 * Return: --
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int ownerC = 0;
	int nameC = 0;

	while (name[nameC])
		nameC++;
	while (owner[ownerC])
		ownerC++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nameC + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i]:
	}
	dog->name[i] = '\0';
	dog->owner = malloc(sizeof(char) * (ownerC + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
