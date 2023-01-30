#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints all the elements of a listint_t
 *@h: input struct
 *Return: size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
