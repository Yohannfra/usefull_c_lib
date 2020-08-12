#include "usefull_c_lib.h"

char *join_array(const char **array, const char *sep)
{
    ssize_t arr_len = array_len(array);
    char *str = NULL;
    ssize_t needed_size = 0;

    if (arr_len == -1)
        return NULL;

    for (ssize_t i = 0; i < arr_len; i++) {
        needed_size += strlen(array[i]);
        if (i + 1 < arr_len && sep)
            needed_size += strlen(sep);
    }

    str = calloc(sizeof(char), needed_size + 1);

    for (ssize_t i = 0; i < arr_len; i++) {
        strcat(str, array[i]);
        if (i + 1 < arr_len && sep)
            strcat(str, sep);
    }
    return str;
}

#if 0
int main(int ac, const char** av)
{
    char *s = join_array(av, "_");
    printf("%s\n", s);
}
#endif