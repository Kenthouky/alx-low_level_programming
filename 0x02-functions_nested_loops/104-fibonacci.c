#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return 0
 */
int main(void)
{
	int c, bolean, bolean2;
	long int n1, n2, gn, gn2, n11, n22;

	n1 = 1;
	n2 = 2;
	bolean = bolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 96; a++)
	{
		if (bolean)
		{
			gn = n1 + n2;
			printf(", %ld", gn);
			n1 = n2;
			n2 = gn;
		}
		else
		{
			if (bolean)
			{
				n11 = n1 % 1000000000
					n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000
					bolean2 = 0;
			}
			gn2 = (n11 + n22);
			gn = n1 + n2 + (gn2 / 1000000000);
			printf(", %ld", gn);
			printf("%ld", gn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = gn;
			n22 = (gn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && bolean == 1)
			bolean = 0;
	}
	printf("\n");
	return (0);
}
