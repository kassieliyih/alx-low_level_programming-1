#include "main.h"
/**
 *_memset - function for memory setting
 *@s:char
 *@b:char
 *@n:int
 *Return:char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n >= 0; n--)
	{
		*p++ =  b;
	}
	return (p);
}
