#include <stdio.h>
/**
 *main - this function printout lower and upercase alpha
 *Return: 0 value
 */
int main(void)
{
	char l, u;

	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
