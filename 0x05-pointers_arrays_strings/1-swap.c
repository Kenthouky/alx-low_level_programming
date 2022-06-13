#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b -= *a;
	*a -= *b;
}
