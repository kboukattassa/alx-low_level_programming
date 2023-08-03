#include "lists.h"
/**
 * free_list - frees the list
 * @head: head of struct
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}
