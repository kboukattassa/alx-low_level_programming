#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to a binary string
 *
 * Return: Converted num, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res * 2) + (*b - '0');
		b++;
	}
	return (res);
}
