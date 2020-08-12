#include "usefull_c_lib.h"

char *get_file_extension(const char *filename, bool include_dot)
{
    size_t k = 0;
    size_t ext_size = 0;
    bool ext_started = false;
    size_t index = 0;
    char *ext = NULL;

    for (size_t i = 0; filename[i] != '\0'; ++i) {
        if (filename[i] == '.') {
            ext_started = true;
            ext_size = 0;
            index = i + (int)!include_dot;
        }
        ext_size += (int)ext_started;
    }
    ext = calloc(ext_size + 1, sizeof(char));
    if (ext == NULL || ext_size == 0)
        return NULL;
    for (size_t i = index; filename[i] != '\0'; ++i, ++k)
        ext[k] = filename[i];
    return ext;
}

#if 0
int main(int argc, const char **argv)
{
    if (argc == 2) {
        char *ext = get_file_extension(argv[1], true);
        printf("%s\n\n", ext);
        free(ext);

        ext = get_file_extension(argv[1], false);
        printf("%s\n", ext);
        free(ext);
        return 0;
    } else {
        printf("USAGE %s filename\n", argv[0]);
    }
    return 1;
}
#endif
