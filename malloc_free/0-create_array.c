#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array of chars and initializes it
 *@size: size of the array
 *@c:character
 *free - to avoid memory leaks
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);
}
