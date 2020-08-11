#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "usefull_c_lib.h"
#include <string.h>

static size_t count_needed_size(const char *str, const char *separators)
{
    size_t size = 0;
    bool last_was_sep = false;
    bool has_first = false;

    for (size_t i = 0; str[i]; i++) {
        if (is_char_in_str(separators, str[i]) != -1 && !last_was_sep) {
            size += 1;
            last_was_sep = true;
        } else {
            if (!has_first) {
                size += 1;
                has_first = true;
            }
            last_was_sep = false;
        }
    }
    return size;
}

static void get_next_word_delimitations(const char *str, const char *separators, size_t *begin, size_t *end)
{
    bool has_begin = false;
    size_t index_begin = 0;
    size_t i = *end + (*end != 0);

    for (; str[i]; i++) {
        if (is_char_in_str(separators, str[i]) != -1) {
            if (has_begin) {
                *end = i - 1;
                *begin = index_begin;
                return;
            }
        } else if (!has_begin) {
            has_begin = true;
            index_begin = i;
        }
    }
    *end = i - 1;
    *begin = index_begin;
}

char **split(const char *str, const char *separators)
{
    char **splitted_str = NULL;
    size_t array_size = count_needed_size(str, separators);

    if (strlen(str) == 0 || separators == NULL)
        return NULL;

    splitted_str = calloc(sizeof(char*), array_size + 1);
    if (splitted_str == NULL || array_size == 0)
        return NULL;

    size_t word_begin = 0;
    size_t word_end = 0;
    for (size_t i = 0; i < array_size; i++) {
        get_next_word_delimitations(str, separators, &word_begin, &word_end);
        splitted_str[i] = get_str_in_range(str, word_begin, word_end);
    }
    return splitted_str;
}

#if 0
int main(int argc, const char **argv)
{
    char *str = "Hello world, how are you ?";

    char **tab = split(str, " ");
    print_char_array(tab);
    free_char_array(tab);
    return 0;
}
#endif