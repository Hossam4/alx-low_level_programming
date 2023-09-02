#include "main.h"

/**
 * _abs - function that coputes the absolute value of a number
 *
 * @n: takes an integer type of the function
 *
 * Return: always (0) success
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
