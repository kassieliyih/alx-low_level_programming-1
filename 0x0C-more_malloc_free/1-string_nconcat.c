#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1:char
 *@s2:char
 *@n:int
 *Return:char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int holder1, i, j, holder2, total;

	if (s1 == NULL)
		holder1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		holder1 = i;
	}
	if (s2 == NULL)
		holder2 = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		holder2 = j;
	}
	if (n >= holder2)
		n = holder2;
	total = holder1 + n +1;
	m = malloc(total);
	for (i = 0; i < holder1; i++)
		m[i] = s1[i];
	for (j = 0; j < n && holder1; j++)
		*(m + holder1++) = s2[j];
	return (m);
}
