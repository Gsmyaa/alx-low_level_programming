#include "lists.h"

/**
 *free_dlistint - frees dlistint_t list
 *@head: head of node
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		temp->prev = NULL;
		temp->next = NULL;
		free(temp);
	}
}
