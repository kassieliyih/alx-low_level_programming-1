#include <stdio.h>

/**
 * main 
 *
 * Return:
 */
int main(void)
{
	int n,m;

	for( n = 0; n <= 8; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
