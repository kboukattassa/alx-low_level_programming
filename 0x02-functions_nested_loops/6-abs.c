#include "main.h"
/**
 * _abs : Computes the absolute value of an int
 *
 * @n : Integer to make absolute
 *
 * Return : int or int times negative
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
