#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: int a to be sum
 * @b: int b to be sum
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int a to be substract
 * @b: int b to be substract
 * Return: the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of two numebers
 * @a: int a to be multiplied
 * @b: int b to be multiplied
 * Return: The product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the integer division of two numbers
 * @a: int a to be divided
 * @b: int b to be divided
 * Return: The integer division of a and b
 */
int op_div(int a, int b)

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the integer division of two numbers.
 * @a: The first integer number.
 * @b: The second integer number.
 *
 * Return: The remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0) /*Checks for posible zero division errors*/
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

