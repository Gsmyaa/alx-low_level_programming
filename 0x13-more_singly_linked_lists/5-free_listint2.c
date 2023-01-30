#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - free listint
 *@head: input linked list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *temp;
	if (head == NULL)
	{
		return (NULL);
	}
	new = head;
	while (new)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	*head = NULL;
	
}
