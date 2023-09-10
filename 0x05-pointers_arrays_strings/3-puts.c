#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: string type
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;

	}
	_putchar('\n');

}
