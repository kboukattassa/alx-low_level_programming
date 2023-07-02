#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 * Return: Result
 */
void puts_half(char *str)
{
	int n;

	if (_strlen(str) % 2 == 1)
	{
		n = (_strlen(str) - 1) / 2;
	}
	else
	{
		n = (_strlen(str)) / 2;
	}
	for (; n < _strlen(str); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
