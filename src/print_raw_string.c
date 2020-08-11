#include <stdio.h>
#include <unistd.h>
#include "usefull_c_lib.h"

#define IS_ESCAPE_SEQUENCE(c) (c == '\r' || c == '\t' || c == '\n')

static void print_escape_sequence(char c)
{
    switch (c)
    {
    case '\t':
        printf("\\t");
        break;
    case '\n':
        printf("\\n");
        break;
    case '\r':
        printf("\\r");
        break;
    default:
        break;
    }
}

void print_raw_string(const char *str)
{
    for (size_t i = 0; str[i]; i++) {
        if (IS_ESCAPE_SEQUENCE(str[i])) {
            print_escape_sequence(str[i]);
        } else
            printf("%c", str[i]);
    }
}