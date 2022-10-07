#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * in lowcase, in a new line 
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}


