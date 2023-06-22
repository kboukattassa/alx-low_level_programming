#include <stdio.h>
/**
 * main - base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + 48);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
