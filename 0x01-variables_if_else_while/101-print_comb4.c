#include <stdio.h>
/**
 * main - This program prints all possible combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int m;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (m = 1; m < 10; m++)
		{
			for (n = 2; n < 10; n++)
			{
				if (i < m && m < n)
				{
					putchar(i + '0');
					putchar(m + '0');
					putchar(n + '0');
					if (i + m + n != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
