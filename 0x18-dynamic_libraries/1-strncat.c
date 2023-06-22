#include "main.h"

/**
 * _strncat - This concatenates two stringd
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be concatenated
 * Return: pointer to the resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && n--)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
