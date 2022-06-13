#include "main.h"

/**
 * puts_str - print a string followed by a nee line to stdout
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}

}
