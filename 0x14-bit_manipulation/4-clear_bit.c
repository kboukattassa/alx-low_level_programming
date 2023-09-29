#include "main.h"
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to nu,b to modify
 * @index: index
 *
 * Return: 1 if it work, -1 if it doesnt
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
