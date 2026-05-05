#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, j;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
