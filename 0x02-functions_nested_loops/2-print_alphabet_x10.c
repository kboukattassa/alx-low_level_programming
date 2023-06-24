#include "main.h"
/**
 * print_alphabet_x10 - Prints alpha x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	while (i < 10, i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	}
	_putchar('\n');
}
