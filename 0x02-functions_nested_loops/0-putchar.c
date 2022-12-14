#include <stdio.h>
#include <main.h>
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
		_putchar(geda[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
