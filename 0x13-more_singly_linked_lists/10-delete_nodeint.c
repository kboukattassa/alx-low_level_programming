#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to head
 * @index: index 
 * Return: riiiieturn
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	new_node = *head;
	while (new_node != NULL)
	{
		if (i == index - 1)
		{
			if (new_node->next == NULL)
				return (-1);
			temp = new_node->next;
			new_node->next = temp->next;
			free(temp);
			return (1);
		}
		new_node = new_node->next;
		i++;
	}
	return (-1);
}
