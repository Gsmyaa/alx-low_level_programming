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
	int i = 0, j = 0, k;
	int len = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		len = len + 1;
		j++;
	}
	if (n > len)
	{
		n = len;
	}
	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	return (dest);
}
