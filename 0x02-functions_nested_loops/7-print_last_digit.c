#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 *
 * @n: takes in integr as a type
 *
 * Return: Always (0) success
 */

int print_last_digit(int n)
{
	int lastD;

	if (n < 0)
		lastD = -1 * (n % 10);
	else 
		lastD = n % 10;

	_putchar(lastD + '0');
	return (lastD);
}
