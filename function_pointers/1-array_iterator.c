#include "function_pointers.h"
/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: executed array
 *@size: size of element
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(action(array[i]));
	}
}
