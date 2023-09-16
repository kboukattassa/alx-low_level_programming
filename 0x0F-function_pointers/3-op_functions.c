#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two ints
 * op_sub - substract one int from another
 * op_mul - multiply two int
 * op_div - divide on int by the other
 * op_mod - returns the rest of the division
 * Return: add sub mul div mod
 */
int op_add(int a, int b)
{
	return a + b;
}
int op_sub(int a, int b)
{
	return a - b;
}
int op_mul(int a, int b)
{
	return a * b;
}
int op_div(int a, int b)
{
	return a / b;
}
int op_mod(int a, int b)
{
	return a % b;
}
