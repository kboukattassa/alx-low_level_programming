#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all elements of the list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%u %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
