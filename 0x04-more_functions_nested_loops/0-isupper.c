#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: input type as character
 *
 * Return: return (1) if letter is Uppercase otherwise return (0) success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
