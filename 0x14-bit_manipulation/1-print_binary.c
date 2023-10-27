#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representation of n
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
