#include <stdio.h>

/**
 * main - causes an infinite  loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infiniteloop incoming :\(\n");/* the errorr is here*/

	i = 0;

	while (i < 10)
	{
		putchar(0);
		i++;
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}