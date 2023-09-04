#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints the numbers to 98
 *
 * @n: an input type integer
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
