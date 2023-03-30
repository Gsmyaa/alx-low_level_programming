#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a new node at a given position
 *@h: head
 *@idx: index of the list where to insert
 *@n: data of node to be insert
 *Return: address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (count == idx)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	free(new);
	return (NULL);
}
