#include <stdio.h>
#include "main.h"
/**
* _isalpha - Shows 1 if the input is c
* lowercase character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for lowcase or uppcase. 0 for the rest.

*/
int _isalpha(int c)
{
	if (c >= 101 && c <= 172)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
