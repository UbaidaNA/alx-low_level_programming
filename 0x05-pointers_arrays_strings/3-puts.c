#include "main.h"

/**
 * _puts - prints a string, then a new line to stdout
 * @str: pointer to the string to be printed
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
