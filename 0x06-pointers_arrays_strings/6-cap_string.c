#include "main.h"
/**
 *cap_string - capitalize all words of string
 *@arr: input arrya
 *Return: char array value
 */
char *cap_string(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ' || arr[i] == '.' || arr[i] == '\n')
		{
			if (arr[i + 1] >= 'a' && arr[i + 1] <= 'z')
			{
				arr[i + 1] = arr[i + 1] - 32;
			}
			else
			{
				arr[i + 1] = arr[i + 1];
			}
		}
	}
	return (arr);
}
