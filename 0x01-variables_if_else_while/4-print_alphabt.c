#include <stdio.h>
/**
 * main - This program prints the alphabets except e and q
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
