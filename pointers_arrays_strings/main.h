void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _putchar(char c);

/** *_* PROJECT 2 *_* **/


/* C More pointers, arrays and strings */

/* 0. strcat */
char *_strcat(char *dest, char *src);

/* 1. strnca */
char *_strncat(char *dest, char *src, int n);	

/* 2. strncpy  */
char *_strncpy(char *dest, char *src, int n);

/* 3. strcmp */
int _strcmp(char *s1, char *s2);

/* 4. I am a kind of paranoid in reverse. */
void reverse_array(int *a, int n);	

/* 5. Always look up  */
char *string_toupper(char *);

/* 6. Expect the best. Prepare for the worst */
char *cap_string(char *);

/* 7. Mozart composed his music not for the elite, but for everybody 
 * Write a function that encodes a string into 1337.
 */


/** *_* PROJECT 3 *_*  **/ 


/* C - Even more pointers, arrays and strings */

/* 0. Write a function that fills memory with a constant byte. */
char *_memset(char *s, char b, unsigned int n);

/* 1. Write a function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. Write a function that locates a character in a string. */
char *_strchr(char *s, char c);

/* 3.  Write a function that gets the length of a prefix substring. */
unsigned int _strspn(char *s, char *accept);

/* 4. Write a function that searches a string for any of a set of bytes. */
char *_strpbrk(char *s, char *accept);

/* 5. Write a function that locates a substring. */
char *_strstr(char *haystack, char *needle);

/* 6.  Write a function that prints the chessboard. */
void print_chessboard(char (*a)[8]);

/** 7. Write a function that prints the sum of the two
 *  diagonals of a square matrix of integers.
 */
void print_diagsums(int *a, int size);

