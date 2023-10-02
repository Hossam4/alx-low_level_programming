#include <stdio.h>
#include <stdlib.h>

/**
* main - function that multiply
* @argc: int
* @argv: int
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		sum = x * y;

		printf("%d\n", sum);
	}
	return (0);
}
