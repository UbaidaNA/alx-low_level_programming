#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = min, j = 0; i <= max; i++, j++)
	{
		array[j] = i;
	}

	return (array);
}
