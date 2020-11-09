#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdint.h>
#include <unistd.h>

void print_int8_t_array(int8_t *arr, size_t size);
void print_uint8_t_array(uint8_t *arr, size_t size);

void print_int16_t_array(int16_t *arr, size_t size);
void print_uint16_t_array(uint16_t *arr, size_t size);

void print_int32_t_array(int32_t *arr, size_t size);
void print_uint32_t_array(uint32_t *arr, size_t size);

void print_int64_t_array(int64_t *arr, size_t size);
void print_uint64_t_array(uint64_t *arr, size_t size);

void print_float_array(float *arr, size_t size);
void print_double_array(double *arr, size_t size);

void print_bool_array(bool *arr, size_t size);

void print_string_array(char **arr);

#define print_array(arr, size)                                                \
    _Generic((arr),                                                   \
                int8_t* : print_int8_t_array((int8_t*)arr, size),         \
                uint8_t* : print_uint8_t_array((uint8_t*)arr, size),       \
                int16_t* : print_int16_t_array((int16_t*)arr, size),      \
                uint16_t* : print_uint16_t_array((uint16_t*)arr, size),    \
                int32_t* : print_int32_t_array((int32_t*)arr, size),      \
                uint32_t* : print_uint32_t_array((uint32_t*)arr, size),   \
                int64_t* : print_int64_t_array((int64_t*)arr, size),      \
                uint64_t* : print_uint64_t_array((uint64_t*)arr, size),    \
                float* : print_float_array((float*)arr, size),            \
                double* : print_double_array((double*)arr, size),         \
                bool* : print_bool_array((bool*)arr, size),               \
                char** : print_string_array((char**)arr)                  \
        )

#endif
