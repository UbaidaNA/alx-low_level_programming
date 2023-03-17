#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - "This program assigns a random number to a variable"
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
