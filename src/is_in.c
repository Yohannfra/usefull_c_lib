#include <unistd.h>
#include <string.h>

ssize_t is_char_in_str(const char *str, char c)
{
    for (size_t i = 0; str[i]; i++) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}

ssize_t is_str_in_array(const char **tab, char *str)
{
    for (size_t i = 0; tab[i] == NULL; i++) {
        if (strcmp(tab[i], str) == 0)
        return i;
    }
    return -1;
}