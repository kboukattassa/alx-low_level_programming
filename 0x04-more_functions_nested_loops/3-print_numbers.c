#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
	return (0);
}
