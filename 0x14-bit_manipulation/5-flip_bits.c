#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * flip_bits - counts the number of the bits to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsinged int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
