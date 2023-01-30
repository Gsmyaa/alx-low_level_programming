#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - adds a new node at end of a list
 *@head: input pointer to a linked list
 *@n: input integer
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
