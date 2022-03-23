#include "main.h"

/**
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);


}
