#include <stdio.h>

/*this function print out size of type*/
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", sizeof(b));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
	
