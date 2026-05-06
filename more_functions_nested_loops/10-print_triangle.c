#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= size; i++)
	{
		for (s = size - i; s > 0; s--)
		{
			_putchar(' ');
		}

		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
