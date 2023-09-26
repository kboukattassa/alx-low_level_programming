{
 	size_t count = 0;
 	size_t i;
 	const listint_t *ptr, *temp;

 	if (head == NULL)
 		exit(98);
 	ptr = head;
 	while (ptr != NULL)
 	{
 		printf("[%p] %d\n", (void *)ptr, ptr->n);
 		ptr = ptr->next;
 		count++;
 		i = 0;
 		temp = head;
 		while (i < count)
 		{
 			if (temp == ptr)
 			{
 				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
 				return (count);
 			}
 			else
 			{
 				temp = temp->next;
 				i++;
 			}
 		}
 	}
 	return (count);
 }
