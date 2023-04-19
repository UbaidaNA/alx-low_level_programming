#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes of its main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int number_bytes, i;
	unsigned char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (unsigned char *)main;

	for (i = 0; i < number_bytes; i++)
	{
		if (i == number_bytes - 1)
		{
			printf("%.2hhx\n", array[i]);
			break;
		}
		else
		{
			printf("%.2hhx ", array[i]);
		}
	}

	return (0);
}

