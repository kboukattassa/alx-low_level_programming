#include <stdio.h>
/**
 * before_main - reads this code before main gets called
 *
 * Return: 0 Always
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
