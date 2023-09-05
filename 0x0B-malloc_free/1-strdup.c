#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointers to newly allocated space in memory
 * @str: og string
 * Return: Result
 */
char *_strdup(char *str)
{
	int len = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		copy[len] = str[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
