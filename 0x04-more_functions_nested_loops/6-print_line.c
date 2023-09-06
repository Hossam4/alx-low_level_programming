#include "main.h"

/**
 * print_line - unction that draws a straight line
 *
 * @n: integer type
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
	}
}
