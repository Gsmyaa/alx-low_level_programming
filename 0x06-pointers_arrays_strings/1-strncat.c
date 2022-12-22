#includ "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: input array
 *@src: input array
 *@n: input digit
 *Return: char type
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		len2 = len2 + 1;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[i + len1] = src[i];
	}
	return (dest);
}
