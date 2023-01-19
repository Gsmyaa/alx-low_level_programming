#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - calculates two integers
 *@argc: input argument numbers
 *@argv: pointer to arguments
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char c;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	calc = get_op_func(argv[2]);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = calc(a, b);
	printf("%d\n", res);
	return (0);
}
