#include "main.h"
/**
 * _islower - Checks for lowercase
 *@c: The character to print
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
