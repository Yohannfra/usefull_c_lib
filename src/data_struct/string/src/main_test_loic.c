#include "string.h"

#include <stdio.h>
#include <string.h>

void test_assign(string_t *s, string_t *ss)
{
    printf("[*] Testing assign\n");
    string_destroy(s);
    assign_c(s, "xss");
    assign_c(ss, ":hoopy:");
    if (strcmp(s->str, "xss"))
        printf("ASSIGN C FAILED\n");
    string_destroy(s);
    assign_s(s, ss);
    if (strcmp(s->str, ":hoopy:"))
        printf("ASSIGN S FAILED\n");
    assign_s(NULL, ss);
    assign_s(s, NULL);
    if (strcmp(s->str, ":hoopy:"))
        printf("ASSIGN S FAILED when null\n");
    string_destroy(s);
    string_destroy(ss);
}

void test_construct_and_del(void)
{
    printf("[*] Testing constructor and destructor\n");

    string_t s;
    string_t *ss = NULL;

    string_init(ss, "xd");
    string_init(&s, "loliloll");
    if (strcmp(s.str, "loliloll"))
        printf("INIT FAILED\n");
    string_destroy(&s);
    if (s.str != NULL)
        printf("DESTROYED FAILED\n");
    string_destroy(NULL);
}

void test_append(string_t *h, string_t *w)
{
    printf("[*] Testing Append\n");
    assign_c(h, "Hello ");
    assign_c(w, "world!");

    append_s(h, w);
    if (strcmp(h->str, "Hello world!"))
        printf("APPEND S FAILED (see test on line %d)\n", __LINE__ - 1);
    append_s(h, NULL);
    if (strcmp(h->str, "Hello world!"))
        printf("APPEND S FAILED (see test on line %d)\n", __LINE__ - 1);
    append_s(NULL, w);
    if (strcmp(h->str, "Hello world!"))
        printf("APPEND S FAILED (see test on line %d)\n", __LINE__ - 1);
    append_s(NULL, NULL); // test no crash

    string_destroy(h);
    assign_c(h, "Hello ");
    append_c(h, "world!");
    if (strcmp(h->str, "Hello world!"))
        printf("APPEND C FAILED (see test on line %d)\n", __LINE__ - 1);
    append_c(h, NULL);
    if (strcmp(h->str, "Hello world!"))
        printf("APPEND C FAILED (see test on line %d)\n", __LINE__ - 1);
    append_c(NULL, "world!"); // test no crash
    append_c(NULL, NULL);     // test no crash
    string_destroy(h);
    string_destroy(w);
}

void test_at(string_t *s)
{
    printf("[*] Testing at\n");
    s->str = strdup("Hello");
    if ('H' != at(s, 0))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    if ('e' != at(s, 1))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    if ('o' != at(s, 4))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    if (-1  != at(s, 5))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    if (-1  != at(s, -1))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    if (-1  != at(NULL, 5))
        printf("AT failed (see test on line %d)\n", __LINE__ - 1);
    string_destroy(s);
}

void test_copy(void)
{
    string_t s;
    char buff[4] = {1, 2, 3, 4};

    printf("[*] Testing copy\n");

    string_init(&s, "abcdefghi");
    copy(&s, buff, 4, 6);
    if (buff[0] != 'g' || buff[1] != 'h' || buff[2] != 'i' || buff[3] != '\0')
        printf("Copy 1 failed got : %s\n", buff);
    copy(&s, buff, 4, 5);
    if (buff[0] != 'f' || buff[1] != 'g' || buff[2] != 'h' || buff[3] != 'i')
        printf("Copy 2 failed got : %s\n", buff);
    copy(&s, buff, 4, 0);
    if (buff[0] != 'a' || buff[1] != 'b' || buff[2] != 'c' || buff[3] != 'd')
        printf("Copy 3 failed got : %s\n", buff);
    copy(&s, buff, 2, 2);
    if (buff[0] != 'c' || buff[1] != 'd' || buff[2] != 'c' || buff[3] != 'd')
        printf("Copy 4 failed got : %s\n", buff);
    string_destroy(&s);
 }

int main_loic(void)
{
    string_t s;
    string_t ss;
    char buff[20] = {0};
    string_init(&s, "1234567890");

//    printf("%s\n", substr(&s, -2, 2)->str);
    string_init(&ss, "");
    test_construct_and_del();
    test_assign(&s, &ss);
    test_at(&s);
    test_append(&s, &ss);
    test_copy();
    string_destroy(&s);
    return (0);
}

