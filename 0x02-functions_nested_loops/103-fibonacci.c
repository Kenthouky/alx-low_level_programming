#include <stdio.h>
/**
 * main - prints added even valuer fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int n1, n2, gn, agn;

	n1 = 1;
	n2 = 2;
	gn = agn = 0;
	while (gn <= 4000000)
	{
		gn = n1 + n2;
		n1 = n2;
		n2 = gn;
		if ((n1 % 2) == 0)
		{
			agn += n1;
		}
	}
	printf("%ld\n", agn);
	return (0);
}
