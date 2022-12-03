#include "main.h"
/**
 * main - Adds only positive numbers
 * @argc: num of args passed to the program
 * @argv: arr of strs
 */

int main (int argc, char *argv[])
{
	int i, sum = 0;

	unsigned long j;

	if (argc == 1)
	{
		printf("argc = %d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
					return (1);
			}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("Result = %d\n", sum);

	return (0);
}

