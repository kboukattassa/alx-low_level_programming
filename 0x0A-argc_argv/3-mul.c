#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two nums
 * @argc: args count
 * @argv: array of args
 * Return: 0 success, 1 failure
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
