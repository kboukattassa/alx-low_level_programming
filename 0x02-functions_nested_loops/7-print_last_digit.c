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
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);

}
