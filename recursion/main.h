#ifndef _MAIN_H
#define _MAIN_H

/** 0. Write a function that prints a string,
 *  followed by a new line. 
 */
void _puts_recursion(char *s);

/* Write a function that prints a string in reverse. */
void _print_rev_recursion(char *s);

/* 2. Write a function that returns the length of a string.  */
int _strlen_recursion(char *s);

/** 3. Write a function that returns the factorial of 
 *  a given number. 
 */
int factorial(int n);

/* 4. Write a function that returns the value of x
 * raised to the power of y.
 */
int _pow_recursion(int x, int y);

/* 5. Write a function that returns the natural square
 *  root of a number.
 */
int _sqrt_recursion(int n);

/* Write a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n);
int calc(int n, int div);

/* putchar function */
int _putchar(char c);

#endif /* MAIN_H */

