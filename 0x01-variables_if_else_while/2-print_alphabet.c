#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: print all the alphapitical
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
