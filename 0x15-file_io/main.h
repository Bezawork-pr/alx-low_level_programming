#ifndef MAIN_IO_H
#define MAIN_IO_H
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_IO_H */
