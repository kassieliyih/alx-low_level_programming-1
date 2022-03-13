#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				if (i == 7 && j == 8 && k == 90)
					continue;
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
