#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n <= size; n++)
		{
			_putchar('#');
		}
