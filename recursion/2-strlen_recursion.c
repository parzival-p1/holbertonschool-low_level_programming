#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: pointer to the string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
		return (0);

	counter = 1 + _strlen_recursion(++s);

	return (counter);
}

