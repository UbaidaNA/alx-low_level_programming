#include "main.h"

/**
 * print_alphabet - This function prints the lowercase alphabets
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
}
