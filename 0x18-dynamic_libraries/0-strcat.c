#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointr to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a != '\0')
	{
		a++;
	}

	while (*src != '\0')
	{
		*a++ = *src++;
	}

	*a = '\0';

	return (dest);
}
