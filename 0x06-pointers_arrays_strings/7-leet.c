#include "main.h"

/**
 * leet - This is a function that encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int i;
	int j;

	char leet[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}

	return (str);
}
