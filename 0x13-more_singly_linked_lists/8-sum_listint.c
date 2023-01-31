#include "lists.h"
/**
 *sum_listint - returns the sum of all data of list
 *@head: input address of linked list
 *Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
