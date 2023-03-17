#include <stdio.h>
/**
 * main - This program prints the alphabets in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

