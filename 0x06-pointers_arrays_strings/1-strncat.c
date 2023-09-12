#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: string type
 * @src: string type
 * @n: number of char
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int i;

	while (dest[destl])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destl + i] = src[i];

	dest[destl + i] = '\0';

	return (dest);
}
