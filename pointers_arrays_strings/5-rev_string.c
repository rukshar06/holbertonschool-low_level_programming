#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: check the string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
	    s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
