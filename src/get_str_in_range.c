#include <unistd.h>
#include <stdlib.h>
#include "usefull_c_lib.h"

char *get_str_in_range(const char *str, size_t beg, size_t end)
{
    char *result = NULL;
    int index = 0;

    if (end - beg <= 0)
        return NULL;
    result = calloc(sizeof(char), (end - beg) + 2);
    if (result == NULL)
        return NULL;
    for (size_t i = beg; str[i] && i <= end; i++) {
        result[index] = str[i];
        index += 1;
    }
    return result;
}