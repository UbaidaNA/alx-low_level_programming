#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all of its
 * parameters
 * @n: number of parameters passed to the function
 * Return: sum of all parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
