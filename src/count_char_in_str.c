#include "usefull_c_lib.h"

size_t count_char_in_str(const char *str, char c)
{
    size_t sum = 0;

    for (size_t i = 0; str[i]; i++) {
        if (str[i] == c)
            sum += 1;
    }
    return sum;
}