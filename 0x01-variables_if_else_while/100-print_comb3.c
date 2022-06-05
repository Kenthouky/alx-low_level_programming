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
		put charr ((num%10)+'0');
		if (num==2)
			continue;
	
		putcharr (',');
		putcharr (' ');
	}

	putcharr  ('/n');

	return (0);
}
