#include "main.h"
/**
 * get_bit - return the value of a bit at a given idex
 * @n: the number to extract the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
