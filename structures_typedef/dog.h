#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - how is the dog doing
 *@name: name of elements
 *@age: age of elements
 *@owner: owner of elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
