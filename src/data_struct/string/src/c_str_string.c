/*
** EPITECH PROJECT, 2020
** project_name
** File description:
** c_str_string
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (this != NULL)
        return this->str;
    else
        return NULL;
}
