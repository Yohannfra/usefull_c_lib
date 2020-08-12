#include "usefull_c_lib.h"

void replace_char(char *str, char src, char dest)
{
    for (size_t i = 0; str[i]; i++) {
        if (str[i] == src)
            str[i] = dest;
    }
}

void replace_str(char **str, char *src, char *dest)
{
    char *start = NULL;
    char *new_str = NULL;
    size_t index_new_str = 0;
    size_t i = 0;

    if (strlen(src) == 0)
        return;

    while ((start = strstr(*str, src))) {
        new_str = calloc(sizeof(char), strlen(*str) + strlen(dest) + 1);
        for (i = 0, index_new_str = 0; i < (size_t)(start - *str); i++) { // before the word
            new_str[index_new_str] = (*str)[i];
            index_new_str += 1;
        }
        strcat(new_str, dest); // the word

        index_new_str += strlen(dest);
        i += strlen(src);

        for (; (*str)[i]; i++) { // after the word
            new_str[index_new_str] = (*str)[i];
            index_new_str += 1;
        }
        free(*str);
        *str = strdup(new_str);
        free(new_str);
        new_str = NULL;
    }
}

#if 0
int main()
{
    // coucou toi tu es toi
    // coucou yohann tu es toi
    // coucou yohann tu es yohann
    char *str = strdup("coucou toi tu es toi toi mon toi");
    replace_str(&str, "coucou", "");

    printf("%s", str);
    free(str);
}
#endif