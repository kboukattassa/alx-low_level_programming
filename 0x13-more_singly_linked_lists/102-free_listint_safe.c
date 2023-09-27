#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - Frees a listint_t list, even if it contains a loop
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: the number of nodes that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp = NULL;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (current != NULL)
	{
		count ++;
		if (current->next >= current)
		{
			temp = current->next;
			current->next = NULL;
			current = temp;
		}
		else
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}
	*h = NULL;
	return (count);
}
