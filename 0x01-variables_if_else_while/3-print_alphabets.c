#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, m;

	for (c = 'a', c <= 'z', c++)
	{
		putchar(c);
	}
	for (m = 'A', m <= 'Z', m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
