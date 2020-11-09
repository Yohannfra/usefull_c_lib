#include "my_map.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

my_map_node_t *env_to_map(char **env)
{
    my_map_node_t *env_map = my_map_create();
    size_t i;


    for (char **envp = env; *envp != NULL; envp++) {
        char *tmp = *envp;
        char *tmp1 = calloc(strlen(tmp), sizeof(char));
        char *tmp2 = calloc(strlen(tmp), sizeof(char));
        for (i = 0; tmp[i] && tmp[i] != '='; i++) {
            tmp1[i] = tmp[i];
        }
        i++;
        for (int j = 0; tmp[i]; i++, j++) {
            tmp2[j] = tmp[i];
        }
        my_map_emplace(env_map, tmp1, tmp2);
        free(tmp1);
        free(tmp2);
    }
    return env_map;
}

int main(int ac, char **av, char **env)
{
    my_map_node_t *my_map = my_map_create();

    for (int i = 0; i < ac ; i++) {
        char buff[20];
        sprintf(buff, "arg %d", i);
        my_map_emplace(my_map, buff, av[i]);

    }
    my_map_dump(my_map);
    my_map_free(&my_map);

    my_map_node_t *env_map = env_to_map(env);
    printf("Hello %s\n", my_map_get(env_map, "USER"));
    my_map_free(&env_map);
    return 0;
}
