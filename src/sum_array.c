#include "usefull_c_lib.h"

int sum_int_array(const int *arr, size_t size)
{
    int sum = 0;

    for (size_t i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}