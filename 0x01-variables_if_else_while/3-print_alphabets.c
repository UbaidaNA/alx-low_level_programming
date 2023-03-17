#include <stdio.h>
/**
 * main - This program prints alphabets in both cases
 * Result: 0 (Success)
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z')
{
	putchar('lower_case');
	lower_case++;
}
	while (upper_case <= 'Z')
{
	putchar('upper_case');
	upper_case++;
}
	putchar(' ');

	return (0);
}
