#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	j = _strlen(s);

	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = temp;
	}
}
/**
 * _strlen -checks string length
 * @s: pointer to the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
