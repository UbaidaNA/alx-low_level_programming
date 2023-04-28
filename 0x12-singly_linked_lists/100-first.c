#include <stdio.h>

/**
 * print_first - prints a phrase before the main function
 * is executed
 * Return: void
 */

void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
