#include "main.h"
/**
 *reverse_array - reverse the content of an array of integers
 *@a: input array
 *@n: input integer
 *Return: void value
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j - i];
		a[j - i] = tmp;

	}
}
