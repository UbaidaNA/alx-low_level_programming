#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	while (i < 11)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
