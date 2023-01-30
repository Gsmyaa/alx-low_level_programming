#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - frees linked list
 *@head: input address of linked list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *temp;

	if (head == NULL)
		return;
	new = head;
	while (new)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	*head = NULL;
}
