#include "main.h"
/**
 *_strchar - function for strring
 *@s:char
 *@b:char
 *Return:ff
 */


char *_strchar(char *s, char b)
{
	for (; *s != '\0'; s++)
		if (*s == b)
		{
			break;
		}
	return (s);
}