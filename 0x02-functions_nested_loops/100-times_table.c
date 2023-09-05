#include "main.h"

/**
 * print_times_table - print time table
 *
 * @n: tkaes number as an input
 */

void print_times_table(int n)
{
	int x, y, result;

	if (n <= 15 && n >= 0)
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				result = x * y;
				_putchar(',');
				_putchar(' ');

				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + 48);
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar(' ');
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
}
