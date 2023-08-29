#include <stdio.h>

/**
 * main - Entry point
 *
 * description : print combination of two digits
 *
 * return : 0 success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (i != j && j < i)
			{
				putchar(j + 48);
				putchar(i + 48);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
