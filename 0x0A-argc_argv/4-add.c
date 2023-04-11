#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * check_num - checks if a string has digits
 * @str: string array
 * Return: 0 (Success)
 */

int check_num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int str_int;
	int sum = 0;

	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			str_int = atoi(argv[i]);

			sum += str_int;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
