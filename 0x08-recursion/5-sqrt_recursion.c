#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer whose square root is to be found
 *  Return: -1 if there is no sqaure root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{


