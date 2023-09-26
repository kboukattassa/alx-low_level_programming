#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer to pointer of the head
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *curr_node, *next_node;
	prev_node = 0;

	curr_node = next_node = *head;
	while (next_node != 0)
	{
		next_node = next_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}
	*head = prev_node;
	return (*head);
}
