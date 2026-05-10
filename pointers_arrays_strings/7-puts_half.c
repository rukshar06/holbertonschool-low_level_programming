#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0;
	int start_index;

	while (str[len] != '\0')
	{
		len++;
	}

	start_index = (len + 1) / 2;

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);

		start_index++;
	}

	_putchar('\n');
}
