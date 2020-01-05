#include <stddef.h>

int square_sum(const int *values, size_t count){
    return (count == 0)? 0 : values[count-1] * values[count-1] + square_sum(values,count-1);
}
