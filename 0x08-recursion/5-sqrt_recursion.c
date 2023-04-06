#include "main.h"

int _sqrt(int n, int i);


/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer whose square root is to be found
 *  Return: -1 if there is no sqaure root
 *  or sqrt of n
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}


/**
 * _sqrt - recursive helper function for _sqrt_recursion
 * @n: integer whose sqrt is to be found
 * @i: current sqrt guess
 * Return: square root of n
 * or -1 if no sqrt is found
 */


int _sqrt(int n, int i)
{
	int j = i * i;

	if (j == n)
	{
		return (i);
	}

	else if (j > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
