#include <stdio.h>

/**
 * main - main function
 *
 * Description: print all the alphapitical
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char u;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (u = 'a' ; i <= 'f' ; i++)
		putchar(u);
	putchar('\n');
	return (0);
}
