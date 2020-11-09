#include "my_map.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define FREE_AND_NULL(ptr)                                                    \
    do {                                                                      \
        free(ptr);                                                            \
        ptr = NULL;                                                           \
    } while (0);

my_map_node_t *my_map_create(void)
{
    my_map_node_t *my_map = malloc(sizeof(my_map_node_t));

    my_map->key = NULL;
    my_map->value = NULL;
    my_map->next = NULL;
    return my_map;
}

void my_map_dump(my_map_node_t *my_map)
{
    my_map_node_t *tmp = my_map;
    printf("map {\n");
    while (tmp) {
        printf("\t '%s' : '%s'\n", tmp->key, tmp->value);
        tmp = tmp->next;
    }
    printf("}\n");
}

char *my_map_get(my_map_node_t *my_map, const char *key)
{
    my_map_node_t *tmp = my_map;

    while (tmp) {
        if (!strcmp(key, tmp->key)) {
            return tmp->value;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void my_map_emplace(my_map_node_t *my_map, const char *key, const char *val)
{
    my_map_node_t *new;

    if (!my_map->next && !my_map->key) {
        my_map->key = strdup(key);
        my_map->value = strdup(val);
    } else {
        new = malloc(sizeof(my_map_node_t));
        new->key = strdup(key);
        new->value = strdup(val);
        new->next = NULL;
        my_map_node_t *tmp = my_map;
        my_map_node_t *prev = tmp;
        while (tmp) {
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next = new;
    }
}

void my_map_clear(my_map_node_t *map)
{
    my_map_node_t *tmp;

    if (map == NULL) {
        return;
    }
    tmp = map->next;
    map->next = NULL;
    while (tmp != NULL) {
        if (tmp->key != NULL) {
            FREE_AND_NULL(tmp->key);
        }
        if (tmp->value != NULL) {
            FREE_AND_NULL(tmp->value);
        }
        my_map_node_t *prev = tmp;
        tmp = tmp->next;
        free(prev);
    }
    if (map->key != NULL) {
        FREE_AND_NULL(map->key);
    }
    if (map->value != NULL) {
        FREE_AND_NULL(map->value);
    }
}

void my_map_free(my_map_node_t **my_map)
{
    my_map_clear(*my_map);
    FREE_AND_NULL(*my_map);
}
