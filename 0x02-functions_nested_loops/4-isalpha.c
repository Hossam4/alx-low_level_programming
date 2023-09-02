#include "main.h"

/**
 * _isalpha - checks if character wether lowercase or uppercase
 *
 * @c: checkes input of other function
 *
 * Return: return (1) if 'c' upper or lowercase otherwise return (0) success
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
