#include "main.h"
/**
 *
 * _isupper - checks if parameter is an uppercase character
 * @z: input character
 * Return: 1 if it is an uppercase character, 0 if it is not.
 */
int _isupper(int z)
{
	if (z >= 65 && z <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
