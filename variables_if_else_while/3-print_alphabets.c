#include <stdio.h>

/**
 * main - prints the alphabet in lowcase & uppcase,
 *
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;
	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar('\n', ch);
	}

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar('\n', ch)
	}
	return (0);
}
