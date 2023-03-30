#include "lists.h"

/**
 *sum_dlistint - returns the sum of all data of node
 *@head: head node
 *Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (sum);
}
