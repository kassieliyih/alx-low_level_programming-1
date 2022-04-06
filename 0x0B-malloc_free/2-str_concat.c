#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function
 *@s1:char
 *@s2:char
 *Return:cha
 */


char *str_concat(char *s1, char *s2)
{
	char *new;
	int i;
	int j;
	int holder1, holder2;
	int total;

	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}
	holder1 = i;

	for (j = 0; s2[j] != '\0'; j++)
	{
		continue;
	}
	holder2 = j - 1;
	total = holder1 + holder2;

	new = malloc(sizeof(char) * total);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && i; j++)
	{
		new[holder1] = s2[j];
		holder1++;
	}
	return (new);
}
