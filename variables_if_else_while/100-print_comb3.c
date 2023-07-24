#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two
 * digits 
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j;
	char *nums = (char *) malloc(sizeof(char) * 11);
	strcpy(nums, "0123456789");

	while(i < strlen(nums))
	{
		j = i + 1;
		while (j < strlen(nums))
		{
			putchar(nums[i]);
			putchar(nums[j]);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	free(nums);
	return (0);
}

