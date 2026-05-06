#include "main.h"
/**
 * reset_to_98 - pointer to an int and updates the value it points to
 * @n: integer
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
