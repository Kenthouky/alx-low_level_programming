#include "main.h"
#include <stdio.h>

/**
 * main - Points and updates an int as parameter
 *
 * Return: Always 0.
 */

void reset_to_98(int n, int *n)
{
	int n;

	n = 402;
	putchar(n);
	reset_to_98(&n);
	int *n = &n;

	*n = 98;
	putchar(*n);

	putchar('/n');
	return (0);
}
