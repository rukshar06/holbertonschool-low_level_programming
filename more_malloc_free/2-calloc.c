#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: size of element
 *Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(unsigned int) * (nmemb * size));
		if (ptr == NULL)
			return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}

