#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees the memory allocated to the structure dog_t
* @d: The pointer to a structure dog_t
* Return: returs void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
