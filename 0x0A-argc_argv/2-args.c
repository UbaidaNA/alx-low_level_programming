#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (Success)
 */

int main(int argc, const char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
