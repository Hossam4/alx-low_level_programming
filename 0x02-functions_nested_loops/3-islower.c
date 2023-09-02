#include "main.h"

/**
 * _islower - function that check if the input is lowercase
 *
 * @c: checks the input of function
 *
 * Return: return (1) if character is lowercase
 * otherwise return (0) success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

