#include "lists.h"
#include <stdlib.h>
/**
 *print_listint_safe - prints a list
 *@head: input addres of a linked list
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t i = 0;

	temp = head;
	if (!head)
		exit(98);
	while (temp)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
