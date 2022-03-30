#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check(int a, int b)
{
        if (a * a == b)
                return (a);
        if (a * a > b)
                return (-1);
        return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

