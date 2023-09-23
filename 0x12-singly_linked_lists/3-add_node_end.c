#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added as the data for the new node
 *
 * Return: the address of the new element, or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int str_len = 0;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[str_len])
		str_len++;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
