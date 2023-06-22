#include "main.h"

/**
 * _strcmp - This compares two strings
 * @s1: string to be compared
 * @s2: other string to be compared to
 * Return: an integer less than, equal to, or greater than zero if s1 is found
 * to be respectively less than, equal to or greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
