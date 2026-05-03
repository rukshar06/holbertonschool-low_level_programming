#include <stdio.h>

/**
* main - prints the number of base 16 in lowercase
*
*Return: Always 0
*/

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
putchar(i + '0');

for (i = 0; i < 6; i++)
putchar(i + 'a');

putchar('\n');

return (0);
}
