#include "main.h"
/**
 * swap_int - Swaps values of two ints
 * @a: first int
 * @b: second int
 * Return: Result
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*b = c;
	*a = d;
}
