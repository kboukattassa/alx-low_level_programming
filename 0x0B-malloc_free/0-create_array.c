#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: Result
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * (size));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
}
