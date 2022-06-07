#include "main.h"

/**
 * times_table - Prints the n times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= n; a++)
	{
		_putchar(48);
		for (b = 1; b <= n; b++)
		{
			op = a * b;
			_putchar(44);
			_putchar(32);
			if (op <= n)
			{
				_putchar(110);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
