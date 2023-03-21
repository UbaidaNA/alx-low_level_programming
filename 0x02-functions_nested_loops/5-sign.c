#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is the number to be checked
 * Return: 1 if it is greater than 0,
 * 0 if it is zero
 * and -1 if it is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
