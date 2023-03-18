#include <stdio.h>
/**
 * main - This program prints all  combinations of two two-digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 99 ; i++)
	{
		for (n = i; n <= 99; n++)
		{
			putchar(i + '0');
			putchar(n + '0');
			if (i + n != 18)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
