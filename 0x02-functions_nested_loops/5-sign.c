#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: character to compare
 *
 * Return: 1 if n > 0, 0 if n = 0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);

}
