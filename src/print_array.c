#include "usefull_c_lib.h"

void print_char_array(const char **tab)
{
    printf("[");
    for (size_t i = 0; tab && tab[i] != NULL; i++) {
        putchar('\"');
        print_raw_string(tab[i]);
        putchar('\"');
        printf("%s", tab[i+1] ? ", " : "");
    }
    printf("]\n");
}

void print_int_array(const int *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_uint_array(const unsigned int *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_int8_array(const int8_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_uint8_array(const uint8_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_int16_array(const int16_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_uint16_array(const uint16_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_int32_array(const int32_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_uint32_array(const uint32_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_int64_array(const int64_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%ld", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_uint64_array(const uint64_t *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%ld", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_float_array(const float *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%f", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_double_array(const double *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%f", tab[i]);
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

void print_bool_array(const bool *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%s", tab[i] ? "true"  : "false");
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

#if 0
int main()
{
    print_int_array((int[5]){1, 2, 3, 4, 5}, 5);
    print_uint_array((unsigned int[5]){1, 2, 3, 4, 5}, 5);
    print_int8_array((int8_t[5]){1, 2, 3, 4, 5}, 5);
    print_uint8_array((uint8_t[5]){1, 2, 3, 4, 5}, 5);
    print_float_array((float[5]){1,2,3,4,5}, 5);
    // print_int_array_g((uint8_t[5]){1, 2, 3, 4, 5}, 5, sizeof(uint8_t));

    print_bool_array((bool[5]){true, false,true, false, true}, 5);
}
#endif
