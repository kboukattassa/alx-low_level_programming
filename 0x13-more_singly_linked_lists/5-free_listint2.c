#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - frees the list and sets the head to NULL
 * @head: pointer to pointer to the head of the list
 *
 * Return: a free list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
