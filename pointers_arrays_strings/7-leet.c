#include "main.h"

/**
 *leet - encodes a string into 1337
 *@str: string
 * 
 * Return: string
 */
char *leet(char *str)
{
	int i = 0;
	int j;

	char letters[11] = "aAeEoOtTlL";
	char numbers[11] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}

		i++;
	}

	return (str);
}
