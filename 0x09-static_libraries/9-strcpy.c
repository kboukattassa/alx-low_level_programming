#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - main function
 * @dest: Destination  to copy
 * @src: Source
 * Return: Character Value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
