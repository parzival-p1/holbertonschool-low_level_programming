#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/* putchar function */
int _putchar(char c);

/* 0. converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* 1. prints the binary representation of a number. */
void print_binary(unsigned long int n);

/* 2. returns the value of a bit at a given index. */
int get_bit(unsigned long int n, unsigned int index);

/* 3. sets the value of a bit to 1 at a given index. */
int set_bit(unsigned long int *n, unsigned int index);

/* 4.  sets the value of a bit to 0 at a given index. */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5. returns the number of bits you would need to flip to get from one number to another.  */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
