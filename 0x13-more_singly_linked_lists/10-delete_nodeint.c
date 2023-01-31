#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes the node at index of a list
 *@head: input address of linked list
 *@index: index of the node that should be deleted
 *Return: 1 if succes, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp;
	int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp; i++)
	{
		if (i == (int) index - 1)
		{
			new = temp;
			temp = temp->next;
			new->next = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);

}
