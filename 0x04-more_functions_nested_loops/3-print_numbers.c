#include "main.h"

/**
 * print_numbers -  function that prints the numbers
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + 48);
	}
	_putchar('\n');
}
