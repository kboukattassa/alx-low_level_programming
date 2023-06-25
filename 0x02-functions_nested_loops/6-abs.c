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
		_putchar("-1*%d\n", n);
	}
	else
	{
		_putchar("%d\n", n);
	}
	return (0);
}
