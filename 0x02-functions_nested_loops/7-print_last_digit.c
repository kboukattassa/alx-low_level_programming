#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Returns the value of ld
 *
 * @n: integer to get ld of
 *
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
