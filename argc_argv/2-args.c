#include "main.h"
#include <stdio.h>
/**
 * main - entry point, prints all args it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

