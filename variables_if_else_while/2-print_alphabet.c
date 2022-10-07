#include <stdio.h>
/**
 * main - Entry point
 *
 * return: always 0 (succes)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{	printf("%c ", ch);
		ch++;
	}

	return (0);
}
