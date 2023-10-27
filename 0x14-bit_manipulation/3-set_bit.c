#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: pointer to num to modify
 * @index: index of the bit set
 *
 * Return: 1 if it works, -1 if else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
}
