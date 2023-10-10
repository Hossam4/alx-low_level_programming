#include "main.h"

/**
 * *malloc_checked - function that allocates memory
 * @b: int type
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
