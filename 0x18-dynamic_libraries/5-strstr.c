#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the string being searched for
 * Return: a pointer to the beginning of the located substring
 * or NULL is the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0' && haystack[k] == needle[j]; j++, k++)
		{
			;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
