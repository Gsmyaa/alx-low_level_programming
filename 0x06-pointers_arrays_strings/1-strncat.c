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
	int i = 0, j = 0;
	int slen = 0;
	char *med = dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		slen++;
		j++;
	}
	if (n > slen)
	{
		n = slen;
	}
	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}
	return (med);
}
