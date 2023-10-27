#include "main.h"
#include <stdio.h>
/**
 * get_bit - return the value of the bit at a given index
 * @n: the number to extract the bit from
 * @index: index
 *
 * Return: The value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
