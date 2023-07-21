#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - indexes array
 * @array: to be indexed
 * @size: size
 * @cmp: function to pt
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
