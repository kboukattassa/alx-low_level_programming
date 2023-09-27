#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sums up the data in the list
 * @head: pointer to the head of the list
 *
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
