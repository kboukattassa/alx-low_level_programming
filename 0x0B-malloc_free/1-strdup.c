#include <stdlib.h>
#include "main.h"
/**
 * _strdup - retruns pointer to newly allocated space in memory
 * @copy: string to copy
 * @str: og string
 * len: para
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

	copy = malloc(sizeof(char) * len);
	if (copy == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		str[len] = copy[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
	
}
