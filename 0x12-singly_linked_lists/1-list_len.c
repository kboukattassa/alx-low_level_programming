#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - number of elements
 * @h: pointer to the first ele
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
