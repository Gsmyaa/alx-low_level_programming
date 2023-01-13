#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: input string 1
 *@s2: input string 2
 *@n: input n
 *Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int len = 0, i, j;
	unsigned int l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*strng lenth part*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		len += 1;
	}
	l = len + n + 1;
	/*malloc part*/
	ar = malloc(sizeof(char) * l);
	if (ar == NULL)
		return (NULL);
	/*Initialization part*/
	for (i = 0; i < len; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
