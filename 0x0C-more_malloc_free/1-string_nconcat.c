#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of characters to be taken from s2
 * Return: pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1, length_s2, i, j;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	length_s1 = strlen(s1);

	if (s2 == NULL)
	{
		s2 = "";
	}
	length_s2 = strlen(s2);

	if (n >= length_s2)
	{
		n = length_s2;
	}
	res = malloc(sizeof(char) * (length_s1 + n + 1));

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';

	return (res);
}
