#include "lists.h"
/**
 *pop_listint - deletes the head of a linked list
 *@head: input address of a linked list
 *Return: int value;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (i);
}

