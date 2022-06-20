#include "main.h"
/**_memcpy - copies n from source to destination
 * @n: bytes to be copied
 * @src: sourcs
 * @dest: destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		(dest + 1) = (src+ 1);
	}

	return (dest);
}
