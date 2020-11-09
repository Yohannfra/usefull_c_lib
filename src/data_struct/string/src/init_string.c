/*
** EPITECH PROJECT, 2020
** project_name
** File description:
** init_string
*/

#include "string.h"
#include <stddef.h>
#include <string.h>

static void init_functions(string_t *this)
{
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->split_c = &split_c;
    this->split_s = &split_s;
}

void string_init(string_t *this, const char *s)
{
    if (this == NULL)
        return;
    init_functions(this);
    if (s != NULL)
        this->str = strdup(s);
    else
        this->str = NULL;
}
