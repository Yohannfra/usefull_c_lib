#include "usefull_c_lib.h"

#define IS_WHITESPACE(c) (c == ' ' || c == '\t')

void lstrip(char *s)
{
    char *tmp = malloc(strlen(s) + 1);
    bool has_first = false;
    size_t j = 0;

    if (s == NULL || tmp == NULL)
        return;
    strcpy(tmp, s);

    for (size_t i = 0; tmp[i]; i++) {
        if (IS_WHITESPACE(tmp[i]) && !has_first)
            continue;
        s[j] = tmp[i];
        if (!has_first)
            has_first = true;
        j += 1;
    }
    s[j] = '\0';
    free(tmp);
}

void rstrip(char *s)
{
    for (int i = strlen(s) - 1; IS_WHITESPACE(s[i]) && i >= 0; i--)
        s[i] = '\0';
}

void strip(char *s)
{
    lstrip(s);
    rstrip(s);
}

#if 0
int main()
{
    char *s = strdup("      strip  ");
    char *s1 = strdup("      lstrip  ");
    char *s2 = strdup("      rstrip  ");
    strip(s);
    lstrip(s1);
    rstrip(s2);
    printf("|%s|\n", s);
    printf("|%s|\n", s1);
    printf("|%s|\n", s2);
    free(s);
}
#endif