#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: type integer
 */

void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (space = 1; space <= row; space++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
}
