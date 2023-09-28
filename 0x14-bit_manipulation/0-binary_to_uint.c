#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: pointer to a binary string
 *
 * Return: converted num, or if 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result * 2) + (*b - '0');
		b++;
	}
	return (result);
}
