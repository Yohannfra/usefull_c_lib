#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* if (argc == 1) */
    /*     return 1; */
    char *buff = malloc(100);
    string_t s;
    string_init(&s, "My string");

    /* s.insert_c(&s, 3, "yohann"); */
    int ret = s.copy(&s, buff, 10, 0);
    printf("buff : |%s| ret = %d\n", buff, ret);
    /* printf("%d\n", s.to_int(&s)); */
    /* printf("%s\n", s.str); */
    /* printf("%s\n", buff); */
    split_c(&s, ' ');
    /* printf("%d\n", s.find_c(&s, argv[1], 0)); */
    string_destroy(&s);
    return (0);
}
