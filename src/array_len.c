#include "usefull_c_lib.h"

ssize_t array_len(const char **array)
{
    size_t len;

    if (array == NULL)
        return -1;
    for (len = 0; array[len] != NULL; len++)
        ;
    return len;
}