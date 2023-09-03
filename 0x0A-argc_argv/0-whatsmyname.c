#include <stdio.h>
#include "main.h"
/**
 * main - prints prog name
 * @argc: counts args
 * @argv: array that contain args
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
