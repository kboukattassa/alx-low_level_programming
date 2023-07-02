#include "main.h"
/**
 * _strncat(char *dest, char *Src, int n)
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return:Result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
