#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar with putchar prototype
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char stri[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(stri[i]);
	_putchar('\n');

	return (0);
}
