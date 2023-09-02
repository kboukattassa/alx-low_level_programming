#include "main.h"
/**
 * _puts - prints a string followed by new line to stdout
 * @str: character of pointer
 * Return: result
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
