#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees the list
 * @head: pointer to the head
 *
 * Return: frees the list node by node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
