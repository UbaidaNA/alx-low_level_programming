#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: is the number to be checked
 * Return: n (Success)
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
