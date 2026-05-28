#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog with copies of name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, name_len = 0, owner_len = 0;

	if (!name || !owner)
		return (NULL);

	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(name_len + 1);
	dog->owner = malloc(owner_len + 1);

	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		dog->owner[i] = owner[i];
	dog->age = age;

	return (dog);
}
