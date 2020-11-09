/*
** EPITECH PROJECT, 2020
** project_name
** File description:
** destroy_string
*/

#include "string.h"
#include <stddef.h>
#include <stdlib.h>

void string_destroy(string_t *this)
{
    if (this == NULL)
        return;
    if (this->str != NULL) {
        free(this->str);
        this->str = NULL;
    }
}
