#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodein_at_index - inserts node at a given pos
 * @head: pointer to pointer of the head of the list
 * @idx: index where the new node should be added
 * @n: data
 *
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node)
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++
	}
	return (NULL);
}
