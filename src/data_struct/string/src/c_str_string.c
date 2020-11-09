#include "string.h"

const char *c_str(const string_t *this)
{
    if (this != NULL)
        return this->str;
    else
        return NULL;
}
