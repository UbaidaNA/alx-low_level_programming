#include "main.h"

/**
 * more_numbers - This prints 0 - 14 ten times
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
				_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
