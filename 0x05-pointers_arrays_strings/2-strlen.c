#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: input type
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		++x;

	return (x);
}