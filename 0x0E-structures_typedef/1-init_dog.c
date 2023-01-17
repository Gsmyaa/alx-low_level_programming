#include "dog.h"
/**
 *init_dog -initialize a variable
 *@d: input struct
 *@name: input pointer
 *@age: input int
 *@owner: input char
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
