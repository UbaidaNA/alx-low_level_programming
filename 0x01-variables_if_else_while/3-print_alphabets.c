#include <stdio.h>
/**
 * main - This program prints alphabets in both cases
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ch_u = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch_u <= 'Z')
	{
		putchar(ch_u);
		ch_u++;
	}
	putchar('\n');
	return (0);
}
