#include "string.h"
#include <stddef.h>
#include <stdbool.h>

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t i = pos;
    size_t k = 0;

    if (this == NULL || this->str == NULL)
        return 0;
    for (; k != n; k++) {
        if (this->str[i] == '\0') {
            s[k] = '\0';
            return k + 1;
        }
        s[k] = this->str[i];
        i++;
    }
    return k;
}
