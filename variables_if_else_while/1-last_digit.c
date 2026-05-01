#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - checks whether the last digit is greater than 5 or less than 6
*
* Return: Always 0
**/

int main(void)
{
	int n;
int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
{
printf("last digit pf %d is %d and is greater than 5\n", n, last_digit);
}
if (last_digit == 0)
{
printf("last digit of % is %d and is 0\n", n, last_digit);
}
if (last_digit < 6 && last_digit != 0)
{
printf("last digit of % is %d and is less than 6 but not 0\n", n, last_digit);
}
	return (0);
}
