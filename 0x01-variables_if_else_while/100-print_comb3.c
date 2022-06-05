# include <stdio.h>
/**
 * main - Prints all possible combinations  of two digits
 *
 *  Return: Always 0.
 */
int main(void)
{
	int num;

	for (num=0; num<=2; num++)
	{
		putchar ((num%10)+'0');
		if (num==2)
			continue;
	
		putchar (',');
		putchar (' ');
	}

	putchar  ('/n');

	return (0);
}
