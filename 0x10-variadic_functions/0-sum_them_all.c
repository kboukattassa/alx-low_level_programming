#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all paras
 * @n: ints to sum up
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list asum;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(asum, n);
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += va_arg(asum, int);
		}
		va_end(asum);
		return (sum);
	}
}
