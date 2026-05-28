#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dynamically allocated memory for a dog struct
 * @d: pointer to the dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}

	free(d);
}
