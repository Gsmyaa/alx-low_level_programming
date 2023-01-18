#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints name
 *@name: input char
 *@f: input pointer to function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
