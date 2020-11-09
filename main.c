#include <stdio.h>
#include "include/usefull_c_lib.h"

int main(int argc, const char **argv)
{
    char **tab = split("hello world je suis jean", " ");
    // print_array(tab);
    print_string_array(tab);
    return 0;
}
