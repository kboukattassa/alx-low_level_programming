#include <stdio.h>
/**
 * main - Prints numbers seperated by a ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (i < 9)
		{
			putchar(i + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
