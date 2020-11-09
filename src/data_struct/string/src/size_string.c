#include "string.h"

int size(const string_t *this)
{
    int i = 0;

    if (this->str == NULL)
        return -1;
    while (this->str[i] != '\0')
        i++;
    return i;
}
