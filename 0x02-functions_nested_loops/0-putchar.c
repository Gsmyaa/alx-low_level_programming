#include <stdio.h>
/**
 *main - prints _putchar
 *Return: 0 value
 */
int main(void)
{
	char geda[9] = "_putchar";
	int n = 0;

	while (n < 9)
	{
		putchar(geda[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
