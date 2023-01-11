#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space
 *@str: input string
 *Return: pointer char
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *ar;

	if (str == NULL)
		return (NULL);
	/*size part*/
	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}
	len++;
	/*malloc part*/
	ar = malloc(len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	/*Initialization part*/
	for (i = 0; i <= len; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
