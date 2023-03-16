#!/bin/bash

cat << EOF > 4-puts.c
#include <stdio.h>
/**
 * main - This program prints a line with 'puts' function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Programming is like building a multilingual puzzle");
	return (0);
}
EOF

gcc 4-puts.c -o 4-puts && ./4-puts && echo "0"
