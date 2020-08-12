#include "usefull_c_lib.h"

bool endwith(const char *str, const char *pattern)
{
    int index_str = strlen(str) - 1;
    int index_pattern = strlen(pattern) - 1;

    if (index_pattern < 0)
        return true;
    if (index_str < 0)
        return false;

    while (1) {
        if (str[index_str] != pattern[index_pattern])
            return false;
        index_str--;
        index_pattern--;
        if (index_str < 0)
            return false;
        if (index_pattern < 0)
            return true;
    }
}

#if 0
int main()
{
    bool res = endwith("", "ta");

    print_bool(res);
    return 0;
}
#endif