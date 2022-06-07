#include "main.h"
/**
 * main - prints all the letters of the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int str[] = {98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 123};
	int count, sz;

	sz = sizeof(dtr) / sizeof(int);
	for (count = 0; count<sz; coun++)
	{
		_putchar(str[count]);
	}
	
	_putchar('\n');

	return (0);
}
