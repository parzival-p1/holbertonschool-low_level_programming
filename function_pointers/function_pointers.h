#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdio.h>
#include <stdlib.h>

/* 0. Write a function that prints a name */
void print_name(char *name, void (*f)(char *));

/** 1.  Write a function that executes a function given
 *  as a parameter on each element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/* 2. Write a function that searches for an integer. */
int int_index(int *array, int size, int (*cmp)(int));

#endif
