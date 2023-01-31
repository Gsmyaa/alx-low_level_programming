#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts node at a given position
 *@head: input link list
 *@idx: index of list where the new node added
 *@n: integer value to be added
 *Return: address of the new code
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *current;
	int i;

	temp = *head;
	if (temp == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	for (i = 0; temp; i++)
	{
		if (i == (int) idx)
		{
			current = temp->next;
			temp->next = new;
			new->next = current;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
