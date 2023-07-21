#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: string to sepearate
 * @n: number of strings passed to the func
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	char *stra;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		stra = va_arg(ps, char*);
		if (stra == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", stra);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ps);
	printf("\n");
}
