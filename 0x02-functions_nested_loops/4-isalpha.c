#include "main.h"

/**
 * main - check the code.
 *
 *Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
				return (1);
	else
	return (0);
}
