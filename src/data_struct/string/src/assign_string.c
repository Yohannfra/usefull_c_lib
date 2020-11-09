/*
** EPITECH PROJECT, 2020
** project_name
** File description:
** assign_string
*/

#include "string.h"
#include <string.h>
#include <stdlib.h>

void assign_s(string_t *this, const string_t *str)
{
    if (this == NULL || str == NULL)
        return;
    if (this->str)
        free(this->str);
    if (str->str == NULL)
        this->str = NULL;
    else
        this->str = strdup(str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (this == NULL)
        return;
    if (this->str)
        free(this->str);
    if (s == NULL)
        this->str = NULL;
    else
        this->str = strdup(s);
}
