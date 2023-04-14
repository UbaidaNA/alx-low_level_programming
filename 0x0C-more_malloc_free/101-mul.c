#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * is_valid - checks if a string is a valid number
 * @str: string to be checked
 * Return: 1 (Success)
 */

int is_valid(char *str)
{
	int i;

	if (str[0] == '\0')
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_valid(argv[1]) || !is_valid(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
