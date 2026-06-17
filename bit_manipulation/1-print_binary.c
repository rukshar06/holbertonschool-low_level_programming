#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: integer
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int num = 0;
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			num = 1;
		}
		else if (num)
		{
			putchar('0');
		}
	}
}
