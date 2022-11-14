#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, multiplies two numbers
 * @argc: number of parameters
 * @argv: array of arguments
 *
 * Return: zero if succesful 1 if there is less tan 2 args
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}

