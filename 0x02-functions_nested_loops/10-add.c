#include "main.h"
/**
 * add - Adds to integers
 * @a: integer to be calculated
 * @b: integer to be calculated
 * Return: The result
 */
int add(int a, int b)
{
	plus = a + b;

	if (plus < 10)
	{
		_putchar(plus + '0');
	}
	else
	{
		_putchar((plus / 10) + '0');
		_putchar((plus % 10) + '0');
	}
	_putchar('\n');
}
