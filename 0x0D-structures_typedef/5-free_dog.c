#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: a pointer to struct dog_t
 *
 * Return: nothing
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
