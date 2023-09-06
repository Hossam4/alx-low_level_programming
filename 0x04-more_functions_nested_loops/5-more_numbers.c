#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 */

void more_numbers(void)
{
	int row;
	int num;

	for (row = 0; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + 48);
			}
			else
			{
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
