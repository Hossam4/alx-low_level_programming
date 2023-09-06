#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 */

void more_numbers(void)
{
	int row;
	int num;
	int x;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			x = num;
			if (num > 9)
			{
				_putchar(1 + 48);
				x = num % 10;
			}
				_putchar(x + 48);
		}
		_putchar('\n');
	}
}
