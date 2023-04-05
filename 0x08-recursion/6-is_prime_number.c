#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to be checked
 * Return: 1 if it is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	else if (((n != 2) && (n % 2 == 0)) ||
		((n != 3) && (n % 3 == 0)) ||
		((n != 5) && (n % 5 == 0)) ||
		((n != 7) && (n % 7 == 0)) ||
		((n != 11) && (n % 11 == 0)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
