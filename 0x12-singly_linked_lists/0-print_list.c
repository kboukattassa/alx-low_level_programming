#include "lists.h"
/**
 * print_list - prints all elements of the list
 * @h: pointer to the head of the list
 *
 * Return: the number of the nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
