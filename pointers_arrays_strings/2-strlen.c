#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: is the string to measure
 *
 * Return: the length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
{
	len++;
}       return len;

}
