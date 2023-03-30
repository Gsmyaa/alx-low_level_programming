#include "lists.h"

/**
 *add_dnodeint - adds a new node at beginning
 *@head: head node
 *@n: int value to be added
 *Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
