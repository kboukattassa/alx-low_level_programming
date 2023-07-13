#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies teo numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
