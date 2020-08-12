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
void print_char_array(const char **tab);
void print_int_array(const int *tab, size_t size);
void print_uint_array(const unsigned int *tab, size_t size);
void print_int8_array(const int8_t *tab, size_t size);
void print_uint8_array(const uint8_t *tab, size_t size);
void print_int16_array(const int16_t *tab, size_t size);
void print_uint16_array(const uint16_t *tab, size_t size);
void print_int32_array(const int32_t *tab, size_t size);
void print_uint32_array(const uint32_t *tab, size_t size);
void print_int64_array(const int64_t *tab, size_t size);
void print_uint64_array(const uint64_t *tab, size_t size);
void print_float_array(const float *tab, size_t size);
void print_double_array(const double *tab, size_t size);
void print_bool_array(const bool *tab, size_t size);

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

#endif // USEFULL_C_LIB_H
