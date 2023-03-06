#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function to calculate arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: calculation
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *c;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	operator = get_op_func(c);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(c, "/") == 0 || (strcmp(c, "%")) == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(a, b));
	return (0);
}
