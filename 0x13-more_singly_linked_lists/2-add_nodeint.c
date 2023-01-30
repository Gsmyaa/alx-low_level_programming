#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of list
 *@head: pointer to linked list
 *@n: input integer
 *Return: pointer to linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	*head = new;
	new->n = n;
	new->next = temp;
	return (*head);
}
