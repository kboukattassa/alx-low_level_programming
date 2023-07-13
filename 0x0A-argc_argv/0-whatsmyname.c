#include <stdio.h>
#include "main.h"
/**
 * main - prints its name
 * @argc: number of args
 * @argv: array that contain the args
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
