#include "usefull_c_lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *get_file_content(const char *fp)
{
    struct stat sb;
    char *s;
    int fd;

    if (lstat(fp, &sb) == -1) {
        return NULL;
    }
    fd = open(fp, O_RDONLY);
    if (fd == -1)
        return NULL;
    s = calloc(sizeof(char), sb.st_size + 1);
    if (s == NULL)
        return NULL;
    read(fd, s, sb.st_size);
    close(fd);
    return s;
}

char **get_file_content_arr(const char *fp)
{
    char *fc = get_file_content(fp);
    char **tab = split(fc, "\n");

    free(fc);
    return tab;
}

#if 0
int main()
{
    // char *s = get_file_content("todo.txt");
    char **tab = get_file_content_arr("todo.txt");
    for (int i = 0;tab[i];i++)
        printf("%s\n", tab[i]);
    free_char_array(tab);

    // printf("%s", s);
    // free(s);
}
#endif