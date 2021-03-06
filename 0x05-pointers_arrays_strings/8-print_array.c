#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array of integers followed by new line
 * @a: array input
 * @n: number of elements in the array
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
