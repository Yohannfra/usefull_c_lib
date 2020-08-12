#include "usefull_c_lib.h"

int *range(int n)
{
    int *arr = calloc(sizeof(int), n);

    for (int i = 0; i < n; i++)
        arr[i] = i;
    return arr;
}

int *range_n_n(int size, int n1, int n2)
{
    int *arr = calloc(sizeof(int), size);

    int idx = 0;
    for (int i = n1; idx < size && i < n2; i++, idx++) {
        arr[idx] = i;
    }
    return arr;
}

#if 0
int main()
{
    print_int_array(range(12), 12);
    print_int_array(range_n_n(12, 1, 13), 12);
    return 0;
}
#endif