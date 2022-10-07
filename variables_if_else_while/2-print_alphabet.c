#include <stdio.h>

/**
 * main - prints the alphabet in lowcase,
 *
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{	putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
