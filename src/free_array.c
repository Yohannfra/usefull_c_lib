#include <stdint.h>
#include <stdlib.h>

void free_char_array(char **arr)
{
    for (size_t i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);;
}