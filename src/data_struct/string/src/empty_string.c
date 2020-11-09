#include "string.h"

int empty(const string_t *this)
{
    return this->size(this) <= 0 ? 1 : 0;
}
