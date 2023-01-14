#include "main.h"
#include <stdio.h>
int mul(int, int);
/**
 *main - multiplies two positive numbers
 *@argc: input argument
 *@argv: input argument array
 *Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(*argv[1] >= '0' && *argv[1] <= '9') || !(*argv[2] >= '0' && *argv[2] <= '9'))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = mul(num1, num2);
	printf("%d\n", res);
	return (0);
}
/**
 *mul - multiply two numbers
 *@num1: input digit
 *@num2: input digit
 *Return: int value
 */
int mul(int num1, int num2)
{
	int res;

	res = num1 * num2;
	return (res);
}
