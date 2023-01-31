#include "lists.h"
#include <stdlib.h>
/**
 *get_nodeint_at_index - returns the nth node of a listint_t
 *@head: input address of a linked list variable
 *@index: index of the node to be returned
 *Return: nth node of list, otherwise NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i;

	temp = head;
	if (temp == NULL)
		return (NULL);
	for (i = 0; temp; i++)
	{
		if (i == (int) index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
