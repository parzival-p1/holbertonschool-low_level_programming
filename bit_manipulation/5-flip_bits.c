#include "main.h"
/**
 * flip_bits - flipos to get from one number to another
 * @n: int to be flipped
 * @m: int to be flipped
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}

