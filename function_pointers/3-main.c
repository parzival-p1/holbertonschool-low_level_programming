#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Program that performs simple operations
 * @argc: number of arguments, passed.
 * @argv: array of "string" pointers with the arguments
 * Return: always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = ptr(a, b);
	printf("%d\n", c);

	return (0);
}

