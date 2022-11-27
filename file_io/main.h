#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

/* Additional functions */
int _putchar(char c);
int _strlen(char *s);

/* 0. reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1. creates a file */
int create_file(const char *filename, char *text_content);

/* 2. appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */

