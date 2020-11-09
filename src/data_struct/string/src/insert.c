#include "string.h"
#include <string.h>
#include <stdlib.h>

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    return insert_c(this, pos, str->str);
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *tmp = NULL;
    int i = 0;
    int k = 0;

    if (this->str == NULL)
        return this->assign_c(this, str);
    if (pos >= strlen(this->str))
        return this->append_c(this, str);
    tmp = strdup(this->str);
    free(this->str);
    this->str = malloc(sizeof(char) * (strlen(tmp) + strlen(str) + 1));
    if (this->str == NULL)
        exit(84);
    for (; k < (int)pos; k++, i++)
        this->str[i] = tmp[k];
    for (int j = 0; str[j]; j++, i++)
        this->str[i] = str[j];
    for (; tmp[k] != '\0'; k++, i++)
        this->str[i] = tmp[k];
    this->str[i] = '\0';
}
