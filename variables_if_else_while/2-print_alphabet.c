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
	char ch = 'a';

	while (ch <= 'z')
	{	printf ("%c", ch);
		ch++;
	}

	return (0);
}
