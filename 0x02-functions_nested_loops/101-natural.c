#include "main.h"
#include <std.io.h"

/**
* main - Entry point
*
* Description: computes and prints the sum of all the multiples of 3 or 5
*
* Return: Always 0 (success)
*/

int main(void)
{
	int rst, x;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			rst += x;
	}
	printf(" % d\n", rst);

	return (0);
}
