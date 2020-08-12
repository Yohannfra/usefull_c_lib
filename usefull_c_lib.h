#ifndef USEFULL_C_LIB_H
#define USEFULL_C_LIB_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// find_extension.c
char *get_file_extension(const char *filename, bool include_dot);

// split.c
char **split(const char *str, const char *separators);

// print_array.c
void print_char_array(char **tab);

// is_in.c
ssize_t is_char_in_str(const char *str, char c);
ssize_t is_str_in_array(const char **tab, char *str);

// print_raw_string.c
void print_raw_string(const char *str);

// get_str_in_range.c
char *get_str_in_range(const char *str, size_t beg, size_t end);

// free_array.c
void free_char_array(char **arr);

// is_str_made_of.c
bool is_str_made_of(const char *str, const char *chars);

#endif // USEFULL_C_LIB_H
