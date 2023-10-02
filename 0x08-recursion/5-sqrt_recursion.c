#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: int
 * @res: int
 *
 * Return: return int
 */

int square(int n, int res);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int type
 * @res: int type
 * Return: int
 */


int square(int n, int res)
{
	if (res * res == n)
		return (res);
	else if (res * res < n)
		return (square(n, res + 1));
	else
		return (-1);
}
