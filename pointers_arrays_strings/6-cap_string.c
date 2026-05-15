#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	int nw = 1;

	while (str[i] != '\0')
	{
		if (nw && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		if (str[i] == ' ' || str[i] == ',' || str[i] == '!' ||
			str[i] == '(' || str[i] == '}' || str[i] == '\t' ||
			str[i] == ';' || str[i] == '?' || str[i] == ')' ||
			str[i] == '\n' || str[i] == '.' || str[i] == '"' ||
			str[i] == '{')

			nw = 1;
		else
			nw = 0;
		i++;
	}
	return (str);
}
