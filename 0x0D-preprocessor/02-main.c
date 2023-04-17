#include <stdio.h>

/**
 * main - Prints the name of the file this was compiled
 * from
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
