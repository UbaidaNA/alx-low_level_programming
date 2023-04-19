#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to apply on name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
