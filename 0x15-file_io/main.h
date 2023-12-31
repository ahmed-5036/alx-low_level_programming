#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
/* Function prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *file_from, const char *file_to);
void elf_header(const char *elf_filename);
void handle_error(const char *message, const char *file, int exit_code);
void close_files(int fd1, int fd2);
void print_elf_header(Elf64_Ehdr *ehdr);
int main(int argc, char *argv[]);
void error_exit(const char *msg, int exit_code);
void print_elf_header(Elf64_Ehdr *h);
#endif /* MAIN_H */

