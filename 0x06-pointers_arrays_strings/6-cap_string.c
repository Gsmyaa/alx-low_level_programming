#include "main.h"
int check_symbol(char c);
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
		if (i == 0; &&(arr[i] >= 'a' && arr[i] <= 'z'))
		{
			arr[i] = arr[i] - 32;
		}
		if (check_symbol(arr[i]))
		{
			if (arr[i + 1] >= 'a' && arr[i + 1] <= 'z')
			{
				arr[i + 1] = arr[i + 1] - 32;
			}
		}
	}
	return (arr);
}
/**
 *check_symbol - checks symbol for seperators
 *@c: input char from cap_string function
 *Return: int value to cap_string function
 */
int check_symbol(char c)
{
	int i;
	char symbol[] = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\n', '\t', ' '};

	for (i = 0; symbol[i]; i++)
	{
		if (c == symbol[i])
		{
			return (1);
		}
	}
	return (0);
}
