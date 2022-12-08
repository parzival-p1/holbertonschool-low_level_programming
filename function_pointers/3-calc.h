#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* returns the sum of a and b */
int op_add(int a, int b);

/* returns the difference of a and b */
int op_sub(int a, int b);

/* returns the product of a and b */
int op_mul(int a, int b);

/* returns the result of the division of a by b */
int op_div(int a, int b);

/* returns the remainder of the division of a by b */
int op_mod(int a, int b);

/*  selects the correct function operation to perform */
int (*get_op_func(char *s))(int, int);

#endif /*  _CALC_H_ */

