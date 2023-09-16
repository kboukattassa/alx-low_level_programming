#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two ints
 *
 * @a: para
 * @b: para
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract one int from another
 * @a: para
 * @b: para
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two int
 * @a: para
 * @b: para
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide on int by the other
 * @a: para
 * @b: para
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the rest of the division
 * @a: para
 * @b: para
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
