#include <stdio.h>

/**
 * main - prints the alphabet in reverse and
 *
 * and in lowcase 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 122;

	while (ch > 96)
	{	putchar(ch);
		ch--;
	}
	putchar(10);
	return (0);
}
