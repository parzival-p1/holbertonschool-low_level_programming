#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments 
 * @argc: number of parameters
 * @argv: An array with the parameters passed to the function
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

