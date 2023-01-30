#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - freed structure
 *@d: input struct address
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
