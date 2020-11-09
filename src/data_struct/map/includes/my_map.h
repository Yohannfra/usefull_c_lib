#ifndef MAP_H
#define MAP_H

typedef struct my_map_node_s {
    char *key;
    char *value;
    struct my_map_node_s *next;
} my_map_node_t;

// ------------------  Element Access ------------------

// get key value
char *my_map_get(my_map_node_t *my_map, const char *key);

// ------------------------------------------------------


// ------------------  Modifiers  ------------------

// remove element
void my_map_remove(my_map_node_t *my_map, const char *key); // TODO impl

// add an element
void my_map_emplace(my_map_node_t *my_map, const char *key, const char *val);

// ------------------------------------------------------


// ------------------  Capacity  ------------------

// check if map is empty
void my_map_empty(my_map_node_t *my_map); // TODO impl

// get size of map
void my_map_get_size(const my_map_node_t *my_map);

// ------------------------------------------------------


// ------------------  Memory ------------------

// create my_map
my_map_node_t *my_map_create(void);

// delete and free my_map
void my_map_free(my_map_node_t **my_map); // TODO fix

// clear my_map
void my_map_clear(my_map_node_t *my_map); // TODO fix

// ------------------------------------------------------


// ------------------  Debug  ------------------

// print my_map
void my_map_dump(my_map_node_t *my_map);

// ------------------------------------------------------

#endif // MAP_H
