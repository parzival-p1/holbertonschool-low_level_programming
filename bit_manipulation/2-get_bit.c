#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: int to be printed as binary
 * @index: index of the bit you want to get
 * Return: the value of a bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}

