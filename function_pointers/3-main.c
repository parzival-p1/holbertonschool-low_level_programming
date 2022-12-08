#include "3-calc.h"
/**
 * main - Program that performs simple operations
 * @argc: number of arguments, passed.
 * @argv: array of "string" pointers with the arguments
 * Return: always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}

