#include "main.h"
/**
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */
void _puts(char *str)
{
	char d[20];
	int i = 0;
	int j = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		d[i] = str[i];
		j++;
	}

	j = j - 1;
	while (j >= 0)
	{
		str[j] = d[i];
		j--;
		i++;
	}


}
