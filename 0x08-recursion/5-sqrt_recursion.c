#include "main.h"


/**
 * _sqrt_help - reccursive helper function for _sqrt_recursion
 * @n: integer whose sqrt is to be found
 * @i: lowesr possible value of sqrt
 * @j: highest possible value of sqrt
 *
 * Return: square root of n
 * or -1 if no sqrt is found
 */

int _sqrt_help(int n, int i, int j);


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
		return (_sqrt_help(n, 0, n));
	}
}


int _sqrt_help(int n, int i, int j)
{
	int mid;

	if (i > j)
	{
		return (-1);
	}

	mid = (i + j) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_help(n, i, mid - 1));
	}
	else
	{
		return (_sqrt_help(n, mid + 1, j));
	}
}
