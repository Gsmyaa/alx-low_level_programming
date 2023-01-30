#include "lists.h"
/**
 *free_listint - frees a linked list
 *@head: input address of linked list
 *Return: nothing
 */
void free_listint(listint_t *head)
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
	free(new);
}
