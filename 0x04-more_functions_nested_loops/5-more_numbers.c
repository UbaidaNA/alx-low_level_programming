#include "main.h"

/**
 * more_numbers - This prints 0 - 14 ten times
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int n;
	int i;

	while (i < 11)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
		i++;
	}
}
