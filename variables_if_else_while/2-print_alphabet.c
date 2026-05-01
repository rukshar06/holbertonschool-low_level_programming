#include <stdio.h>

/**
* main - program in lowercase on a new line
*
*Return: Always 0
*/

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');

return (0);
}
