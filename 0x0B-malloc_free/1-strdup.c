#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - This returns a pointer to a newly allocate
 * space in memory, which contains a copy of the
 * string as a parameter
 * @str: string to be duplicated
 * Return: pointer to duplicated string,
 * NULL if str = NULL or insufficient available memory
 */

char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
