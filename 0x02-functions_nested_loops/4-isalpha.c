#include "main.h"
/**
 * _isalpha - checks for alpha
 *@c: The character to print
 *
 * Return: 1 if upper or lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
