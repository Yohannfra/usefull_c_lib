#ifndef USEFULL_C_LIB_H
#define USEFULL_C_LIB_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* #include "my_map.h" */

// find_extension.c
char *get_file_extension(const char *filename, bool include_dot);

// split.c
char **split(const char *str, const char *separators);

// #define print_array __print_array
#include "print_array.h"

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

// print_bool.c
void print_bool(bool val);

// startwith.c
bool startwith(const char *str, const char *pattern);

// endwith.c
bool endwith(const char *str, const char *pattern);

// rev_str.c
void rev_str(char *str);

// count_char_in_str.c
size_t count_char_in_str(const char *str, char c);

// sum_array.c
int sum_int_array(const int *arr, size_t size);

// replace.c
void replace_char(char *str, char src, char des);
void replace_str(char **str, char *src, char *des);

// array_len.c
ssize_t array_len(const char **array);

// join_array.c
char *join_array(const char **array, const char *sep);

// strip.c
void lstrip(char *s);
void rstrip(char *s);
void strip(char *s);

// get_file_content.c
char **get_file_content_arr(const char *fp);
char *get_file_content(const char *fp);

#endif // USEFULL_C_LIB_H
