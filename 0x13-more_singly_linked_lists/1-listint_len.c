#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements
 * @h: pointer to the head
 * Return: the num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
