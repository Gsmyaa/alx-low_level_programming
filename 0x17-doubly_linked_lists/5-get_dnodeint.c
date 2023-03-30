#include "lists.h"

/**
 *get_dnodeint_at_index - returns th nth node of a list
 *@head: head node
 *@index: index of the node
 *Return: nth node, NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
