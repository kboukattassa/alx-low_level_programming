#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to num to modify
 * @index: index of  the bit to set
 *
 * Return: 1 if works, -1 if doesnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
