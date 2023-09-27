#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - finds the starting point of a loop
 * in a linked list
 * @head: pointer to the head of the linked list
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	while (slow_ptr && fast_ptr && fast->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while ( slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}
	return (NULL);
}
