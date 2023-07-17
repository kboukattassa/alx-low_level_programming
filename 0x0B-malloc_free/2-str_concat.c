#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: para
 * @s2: para
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	while (s1[len1])
	{
		string[len1] = s1[len1];
		len1++;
	}
	len2 = 0;
	while (s2[len2])
	{
		string[len1] = s2[len2];
		len1++;
		len2++;
	}
	string[len1] = '\0';
	return (string);
}
