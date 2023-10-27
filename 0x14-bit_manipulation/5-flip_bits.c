#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - counts the nu,ber of the bits to flip
 * @n: the first num
 * @m: the second num
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
