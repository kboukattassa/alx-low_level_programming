#include <stdio.h>
/**
 * main - Prints numbers seperated by a ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
