#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @n: Number of elements in an array
 * @a: Array of integers
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
