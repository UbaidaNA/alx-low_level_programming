#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: Integer value of string
 */

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int result = 0;

	if (s[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return ( sign * result)
}
