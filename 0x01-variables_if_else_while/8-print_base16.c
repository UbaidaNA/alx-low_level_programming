#include <stdio.h>

/**
 * main - This program prints numbers of base 16 in lowercase
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
