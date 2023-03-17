#include <stdio.h>
/**
 * main - This program prints alphabets in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(' ');

	return (0);
}
