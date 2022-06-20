#include "main.h"
#include <stdio.h>
/**
 * _memset - fills first n bytes of memory area
 * pointed to by s with constant b
 * @s: pointer
 * @b: constant
 * @n: memory area
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		i++;
		*(s + i) = b;
	}
	
	return (s);
}
