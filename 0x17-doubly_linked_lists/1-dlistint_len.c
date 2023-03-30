#include "lists.h"

/**
 *dlistint_len - returns the numbe of elements in a linked list
 *@h: pointer value points to doubly-linked list
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
