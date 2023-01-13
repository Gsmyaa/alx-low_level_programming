#include "main.h"
/**
 *array_range - creates an array range
 *@min: input min number
 *@max: input max number
 *Return: int array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, range;
	/*check part*/
	if (min > max)
		return (NULL);
	range = max - min;
	range++;
	/*malloc part*/
	ar = malloc(sizeof(int) * range);
	if (ar == NULL)
		return (NULL);
	/*initialization part*/
	for (i = 0; i < range; i++)
	{
		if (min <= max)
		{
			ar[i] = min;
			min++;
		}
	}
	ar[i] = '\0';
	return (ar);
}
