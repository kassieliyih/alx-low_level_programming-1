#include <stdio.h>

/**
 * main 
 *
 * Return:
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);
	putchar('\n');
	return (0);
}
