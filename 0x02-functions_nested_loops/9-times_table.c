#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, i, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);

		for (i = 1; i <= 9; i++)
		{
			result = n * i;
			_putchar(',');
			_putchar(' ');

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
