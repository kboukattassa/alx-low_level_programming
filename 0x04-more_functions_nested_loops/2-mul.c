#include "main.h"
/**
 * mul - Multiplies two integers
 * @a: integer
 * @b: integer
 * Retun: result
 */
int mul(int a, int b)
{
	int mult = a * b;

	if (mult <= 9)
	{
		_putchar(mult + '0');
	}
	else
	{
		_putchar((mult / 10) + '0');
		_putchar((mult % 10) + '0');
	}
}
