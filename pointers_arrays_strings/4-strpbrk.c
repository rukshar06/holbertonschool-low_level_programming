#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: bytes
 *Return:  a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (accept != '\0')
	{
		if (*s == accept)
		{
			return (s);
		}
		accept++;
	}
	return (0);
}
