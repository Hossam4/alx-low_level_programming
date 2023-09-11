#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: string type
 *
 * Return: return integer from string
 */

int _atoi(char *s)
{
	unsigned int x = 0;
	int sign = i;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);

	return (x * sign);
}
