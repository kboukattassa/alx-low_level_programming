#include "main.h"
/**
 * _isupper - Checks for uppercase
 * @c: character
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 56 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
