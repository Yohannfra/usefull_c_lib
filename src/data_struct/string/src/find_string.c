#include "string.h"
#include <stdio.h>

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return find_c(this, str->str, pos);
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int this_len = this->size(this);
    int i = pos;
    int j = 0;
    int k = i;

    if ((int)pos > this_len)
        return -1;
    while (this->str[i] != '\0') {
        while (this->str[i] && str[j] && this->str[i] == str[j]) {
            j++;
            i++;
        }
        if (str[j] == '\0')
            return k;
        i = k + 1;
        j = 0;
        k = i;
    }
    return -1;
}
