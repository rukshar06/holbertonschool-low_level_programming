#include "main.h"

/**
 *_strdup -returns a pointer to a newly allocated space in memory
 *@str: string
 *Return:NULL
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];

	arr[i] = '\0';
	return (arr);

	free(arr);
}
