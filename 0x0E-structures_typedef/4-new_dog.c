#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	int i = 0, j = 0;

	i = strlen(name);
	j = strlen(owner);
	i++;
	j++;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(dog_t) * i);
	if (ptr == NULL)
		return (NULL);
	ptr->owner = malloc(sizeof(dog_t) * j);
	if (ptr == NULL)
		return (NULL);
	(*ptr).name = strdup(name);
	(*ptr).age = age;
	(*ptr).owner = strdup(owner);
	return (ptr);
}
