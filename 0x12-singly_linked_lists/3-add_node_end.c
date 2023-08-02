#include "lists.h"
/**
 * add_node_end - adds node at the end
 * @head: head node of the list
 * @str: str
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
		return (new_node);
	}
}
