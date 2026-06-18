#include "main.h"
/**
 *set_bit -  sets the value of a bit to 1 at a given index
 *@n: integer
 *@index: starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(*n) * 8;
	unsigned long int mask = 1;

	if (index >= bits || n == NULL)
	{
		return (-1);
	}
	mask = mask << index;

	*n = *n | mask;

	return (1);
}
