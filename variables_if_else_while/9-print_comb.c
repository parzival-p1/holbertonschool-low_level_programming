#include <stdio.h>

/**
 * main - prints number from 0 to 10
 * and adds a coma ','
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}



