include "main.h"

/**
 * print_sign - print + if n is greater than 0 otehrwise -
 *
 * @n: tyep of function
 *
 * Return: 1 if more than 0 otherwise (0) success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

