#include "lists.h"
/**
 *free_listint - frees a linked list
 *@head: input address of linked list
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	if(head == NULL)
		return;
	free(head->next);
	free(head);
}
