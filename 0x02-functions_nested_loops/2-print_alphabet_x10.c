#include "main.h"
/**
 *print_alphabet_x10 - print alpha 10 times
 *Return: 0 value
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0;i <= 9;i++)
	{
		for (l = 'a';l < 'z';l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
	
}
