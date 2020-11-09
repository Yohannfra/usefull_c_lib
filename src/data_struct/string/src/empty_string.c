/*
** EPITECH PROJECT, 2020
** project_name
** File description:
** empty_string
*/

#include "string.h"

int empty(const string_t *this)
{
    return this->size(this) <= 0 ? 1 : 0;
}
