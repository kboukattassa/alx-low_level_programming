#include "main.h"
/**
 * factorial - calculates the factorial of an int
 * @n: para
 *
 * Return: if n is neg prints -1, if n is 0 prints 1,
 * otherwise prints the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
