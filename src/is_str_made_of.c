#include "usefull_c_lib.h"

bool is_str_made_of(const char *str, const char *chars)
{
    for (size_t i = 0; str[i]; i++) {
        if (is_char_in_str(chars, str[i]) == -1)
            return false;
    }
    return true;
}

#if 0
int main()
{
    char *str = "       toto";
    char *chars = " to";

    bool result = is_str_made_of(str, chars);
    printf("%s", result ? "True" : "False");
}
#endif