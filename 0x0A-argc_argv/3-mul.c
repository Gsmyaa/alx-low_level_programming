#include "main.h"
#include <stdlib.h>
int _mul(int, int);
/**
 *main - multiply two numbers
 *@argc: input argument
 *@argv: input
 *Return: integer
 */
int main(int argc, char *argv[])
{
	int n1, n2, res = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = _mul(n1, n2);
	printf("%d\n", res);
	return (0);
}
/**
 *_mul - multiply two numbers
 *@n1: input argument
 *@n2: input
 *Return: integer
 */
int _mul(int n1, int n2)
{
	int res;

	res = n1 * n2;
	return (res);
}
