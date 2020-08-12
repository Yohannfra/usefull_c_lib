#include "usefull_c_lib.h"

void rev_str(char *str)
{
    char tmp;
    size_t size = strlen(str);
    int index = 0;

    if (size == 0)
        return;

    for (int i = size - 1; i > index; i--) {
        tmp = str[i];
        str[i] = str[index];
        str[index] = tmp;
        index++;
    }
}

#if 0
int main()
{
    char *str = strdup("1234");
    rev_str(str);
    printf("%s", str);
    return 0;
}
#endif