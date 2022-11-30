#ifndef MAIN_H
#define MAIN_H

int putchar(char c);
int islower(int c);
int isalpha(int c);
int abs(int n);
int isupper(int c);
int isdigit(int c);
int strlen(char *s);
void puts(char *s);
char *strcpy(char *dest, char *src);
int atoi(char *s);
char *strcat(char *dest, char *src);
char *strncat(char *dest, char *src, int n);
char *strncpy(char *dest, char *src, int n);
int strcmp(char *s1, char *s2);
char *memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, char c);
unsigned int strspn(char *s, char *accept);
char *strpbrk(char *s, char *accept);
char *strstr(char *haystack, char *needle);

#endif

