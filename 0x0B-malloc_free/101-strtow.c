#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - This splits a string into words
 * @str: string to be split
 * Return: NULL if it fails or if str = NULL of ""
 */

char **strtow(char *str)
{
	int i, j;
	int k = 0, n = 0;
	int length;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (!isspace(str[i]))
		{
			j = i;
			while (j < length && !isspace(str[j]))
			{
				j++;
			}
		}
