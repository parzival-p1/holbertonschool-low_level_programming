#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints all possible combinations of 
 * two two-digit numbers
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned int i = 48;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = i;
			while (k <= 57)
			{
				if (k == i)
					l = j + 1;
				else
					l = 48;

				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(j == 56 && i == 57)) // si esto NO es 98, en el 1er par put ',' y ' ' 
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
