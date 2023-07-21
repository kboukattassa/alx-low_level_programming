#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers
 * @n: number of ints
 * @separator: string sep
 * Return: res
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(pn, int);

		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(pn);
	printf("\n");
}
