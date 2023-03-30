#include "lists.h"

/**
 *delete_dnodeint_at_index - delets the node at index of list
 *@head: head node of list
 *@index: index of the node to be deleted
 *Return: 1 if success, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *temp = *head;
	unsigned int count = 1;
	
	if(*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (temp)
	{
		if (count == index)
		{
			ptr = temp->next;
			ptr->next->prev = temp;
			temp->next = ptr->next;
			free(ptr);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
