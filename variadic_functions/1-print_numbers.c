#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argc;

	va_start(argc, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argc, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		va_end(argc);
	}
	printf("\n");
}
