#include "usefull_c_lib.h"
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void print_string_array(char **tab)
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

void print_bool_array(bool *tab, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%s", tab[i] ? "true"  : "false");
        printf("%s", i+1<size ? ", " : "");
    }
    printf("]\n");
}

#define PRINT_ANY_INT_ARRAY(_size, format)                             \
    void print_ ## _size ##  _array(_size *x, size_t size)             \
    {                                                                  \
        printf("[");                                                   \
        for (size_t i = 0; i != size; i += 1){                         \
            printf("%" format, x[i]);                                  \
            printf("%s", i+1<size ? ", " : "");                        \
        }                                                              \
        printf("]\n");                                                 \
    }

PRINT_ANY_INT_ARRAY(float, "f")
PRINT_ANY_INT_ARRAY(double, "f")
PRINT_ANY_INT_ARRAY(int8_t, SCNd8)
PRINT_ANY_INT_ARRAY(uint8_t, SCNu8)
PRINT_ANY_INT_ARRAY(int16_t, SCNd16)
PRINT_ANY_INT_ARRAY(uint16_t, SCNu16)
PRINT_ANY_INT_ARRAY(int32_t, SCNd32)
PRINT_ANY_INT_ARRAY(uint32_t, SCNu32)
PRINT_ANY_INT_ARRAY(int64_t, SCNd64)
PRINT_ANY_INT_ARRAY(uint64_t, SCNu64)

#if 0
int main(int ac, char ** av)
{
    print_array(((double[5]){1, 2, 3, 4, 5}), 5);
    print_array(((unsigned int[5]){1, 2, 3, 4, 5}), 5);
    print_array(((int8_t[5]){1, 2, 3, 4, 5}), 5);
    print_array(((uint8_t[5]){1, 2, 3, 4, 5}), 5);
    print_array(((float[5]){1,2,3,4,5}), 5);
    print_array(((uint64_t[5]){1, 2, 3, 4, 5}), 5);
    print_array(((bool[5]){true, false,true, false, true}), 5);
    print_array(av, 5);
}
#endif
