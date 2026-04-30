#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - checks the code whether it is positive or negative or zero
*
* Return: Always 0
**/

int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("number is positive\n");
}
else if (n < 0)
{
printf("number is negative\n");
}
else
{
printf("number is zero\n");
}
return (0);
}
