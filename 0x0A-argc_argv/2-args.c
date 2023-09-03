#include <stdio.h>
#include "main.h"
/**
 * main - Prints all the args it receives
 * @argc: argument count
 * @argv: array of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
