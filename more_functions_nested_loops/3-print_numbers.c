#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char *str = "0123456789";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
