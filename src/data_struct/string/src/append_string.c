#include "string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void append_s(string_t *this, const string_t *ap)
{
    if (this == NULL || ap == NULL)
        return;
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    char *tmp = NULL;

    if (this == NULL)
        return;
    if (this->str == NULL) {
        this->str = strdup(ap);
        return;
    } else if (ap == NULL)
        return;
    tmp = strdup(this->str);
    free(this->str);
    this->str = NULL;
    this->str = malloc(sizeof(char) * (strlen(tmp) + strlen(ap) + 1));
    if (this->str == NULL)
        exit(84);
    strcpy(this->str, tmp);
    strcat(this->str, ap);
    free(tmp);
}
