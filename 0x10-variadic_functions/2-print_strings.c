#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints string followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: a variable number of strings to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
