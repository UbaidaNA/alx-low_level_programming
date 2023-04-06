#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer whose square root is to be found
 *  Return: -1 if there is no sqaure root
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	int mid;
	int j = n;
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		while (i <= j)
		{
			mid = (i + j) / 2;

			if (mid * mid == n)
			{
				return (mid);
			}
			if (mid * mid < n)
			{
				i = mid + 1;
				res = mid;
			}
			else
			{
				j = mid - 1;
			}
		}
		return (res);
	}
}
