#include <stddef.h>
#include "string.h"

char at(const string_t *this, size_t pos)
{
    size_t i = 0;

    if (this == NULL)
        return -1;
    while (this->str[i] != '\0') {
        if (i == pos)
            return this->str[i];
        i++;
    }
    return -1;
}
