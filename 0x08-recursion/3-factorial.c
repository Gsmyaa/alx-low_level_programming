#include "main.h"
/**
*factorial - factorial of a given number
*@n: input number
*Return: int value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
