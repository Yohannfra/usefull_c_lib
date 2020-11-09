#include "string.h"
#include <string.h>
#include <stdlib.h>

void clear(string_t *this)
{
    if (this->str == NULL)
        return;
    free(this->str);
    this->str = strdup("");
}
