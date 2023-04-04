#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to the start of the matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + i * size + i);
		sum_2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", sum_1, sum_2);

}
