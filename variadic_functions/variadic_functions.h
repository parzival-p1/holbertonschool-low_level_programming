#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/* 0. returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* 1. prints numbers, followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. prints strings, followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3. prints anything */
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
