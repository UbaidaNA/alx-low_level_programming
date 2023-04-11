#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 1 if there's an error, otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int res = i * j;

		printf("%d\n", res);
		return (0);
	}

}
