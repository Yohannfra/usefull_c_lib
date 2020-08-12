#include "usefull_c_lib.h"

void print_char_array(char **tab)
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

// TODO
// add other array types
