#include "main.h"

/**
 * _strncat -copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: integer
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r = 0;
	int s = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	while (s < n && src[s])
	{
		dest[r] = src[s];
		r++;
		s++;
		dest[r] = '\0';
	}
	return (dest);
}
