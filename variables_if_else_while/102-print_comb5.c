#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints all possible of two two-digit numbers
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k;
	unsigned int l;
	char *nums = (char *) malloc (sizeof(char) * 11);

	strcpy(nums, "0123456789");

	while(i < strlen(nums))
	{
		j = 0;
		while(j < strlen(nums))
		{
			k = i;
			while(k < strlen(nums))
			{
				l = j + 1;
				while (l < strlen(nums))
				{
					putchar(nums[i]);
					putchar(nums[j]);
					putchar(' ');

					putchar(nums[k]);
					putchar(nums[l]);
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

/*	while(k < strlen(nums))
	{
		j = k + 1;
		while(j < strlen(nums))
		{	
			putchar(nums[k]);
			putchar(nums[j]);
			putchar(',');
			putchar(' ');
			j++;
		}
		k++;
	}*/
	putchar('\n');
	free(nums);
	return (0);
}

