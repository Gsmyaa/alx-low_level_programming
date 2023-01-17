#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: input nme
 *@age: input
 *@owner: input
 *Return: struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	return (ptr);
}