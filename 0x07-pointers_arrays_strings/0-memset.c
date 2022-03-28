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
	for (; n >= 0; n--)
	{
		*s++ =  b;
	}
	return (s);
}
