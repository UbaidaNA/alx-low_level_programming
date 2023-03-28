#include "main.h"

/**
 * puts_half - This prints half of a string and a new line
 * @str: pointer to the string
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2 + 1;
	}
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
