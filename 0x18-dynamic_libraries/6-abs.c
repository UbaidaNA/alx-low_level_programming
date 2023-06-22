#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @a: represents the integer
 * Return: a (Success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else
		a = a;
	return (a);
}
