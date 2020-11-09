#include "string.h"
#include <stdlib.h>

int to_int(const string_t *this)
{
    if (this->str == NULL)
        return 0;
    return atoi(this->str);
}
