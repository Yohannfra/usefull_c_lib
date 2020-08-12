#include "usefull_c_lib.h"

bool startwith(const char *str, const char *pattern)
{
    return strncmp(str, pattern, strlen(pattern)) == 0;
}

#if 0
int main()
{
    bool result = startwith("main", "m");
    print_bool(result);
}
#endif