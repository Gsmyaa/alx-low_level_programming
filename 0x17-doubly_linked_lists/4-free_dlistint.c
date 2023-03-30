#include "lists.h"

/**
 *free_dlistint - frees dlistint_t list
 *@head: head of node
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
		free(head);
}
