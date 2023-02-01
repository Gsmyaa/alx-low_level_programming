#include "lists.h"
/**
 *reverse_listint - reverses a list
 *@head: input address of head of linked list
 *Return: address of link list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *temp;

	temp = NULL;
	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = new;
	}
	*head = temp;
	return (*head);
}
