#include <stdio.h>
/**
 * main - prints the adder fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;
	long int n1, n2, gn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a=0; a<48; a++)
	{
		gn = n1+n2;
		printf(", %ld", gn);
		n1 = n2;
		n2 = gn;
	}
	printf ("/n");
	return (0);
}
