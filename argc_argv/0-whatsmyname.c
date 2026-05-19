#include "main.h"

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(argc--);

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
