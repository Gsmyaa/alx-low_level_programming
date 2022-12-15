#include "main.h"
/**
 *_abs - absolute value
 *@n: take this value and compute it abs
 *Return: 0 value
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = (-1) * n;
		return (a);
	}
	else
	{
		return (n);
	}
}
