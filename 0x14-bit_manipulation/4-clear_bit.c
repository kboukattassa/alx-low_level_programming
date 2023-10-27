#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of bit to 0
 * @n: pointer to the numb to modi
 * @index: index of bit
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
