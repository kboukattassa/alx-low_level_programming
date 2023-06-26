#include "main.h"
/**
 * print_most_numbers - Prints from 0 to 9 except 2 & 4
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 &&  n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
