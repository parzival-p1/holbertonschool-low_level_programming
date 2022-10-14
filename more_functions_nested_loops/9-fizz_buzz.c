#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followd by a new line
 * for multiples of 3 prints "Fizz"
 * for multiples of 5 prints "Buzz"
 * for multiples of 3 & 5 prints "FizzBuzz"
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz\n");

		else if (i % 3 == 0)
			printf("Fizz\n");

		else if (i % 5 == 0)
			printf("Buzz\n");

		else
			printf("%d\n", i);
	}

	return (0);
}

