#include "main.h"
/**
 *string_toupper - changes all lowercase letters to upper
 *@arr: input array
 *Return: char array value
 */
char *string_toupper(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] - 32;
		}
		else
		{
			arr[i] = arr[i];
		}
	}
	arr[i] = '\0';
	return (arr);
}
