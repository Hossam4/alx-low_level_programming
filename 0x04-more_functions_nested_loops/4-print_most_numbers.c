#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(d + 48);
	}
	_putchar('\n');
}
