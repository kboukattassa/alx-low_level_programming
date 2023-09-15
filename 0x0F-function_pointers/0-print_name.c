#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @f: function to pointer
 * @name: string
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
