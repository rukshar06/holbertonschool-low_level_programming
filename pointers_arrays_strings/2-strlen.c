#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * s: is a pointer to a char
 * @len: is a pointer to an int
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
{
	len++;
}       return len;

}
