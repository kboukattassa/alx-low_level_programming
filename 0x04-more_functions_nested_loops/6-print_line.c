#include "main.h"
/**
 * print_line - Prints lines
 * @n: integer to print
 * Return: prints result
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
