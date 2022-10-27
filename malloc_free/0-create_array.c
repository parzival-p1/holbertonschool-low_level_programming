#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char & initizalizes
 * it with a specifi char.
 *
 * @size: size of the arr
 * @c: char to initialized with
 * Return: pointer to the arr or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
