 #include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number
 *Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list argc;
	int total = 0;

	if (n == 0)
		return (0);
	va_start(argc, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(argc, unsigned int);
	}
	va_end(argc);
	return (total);
}
