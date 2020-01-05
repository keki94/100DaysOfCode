/* CodeWars 8 Kyu
*
*Complete the square sum function so that it squares each number passed into it and then sums the results together.
*For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
*/
#include <stddef.h>

int square_sum(const int *values, size_t count){
    return (count == 0)? 0 : values[count-1] * values[count-1] + square_sum(values,count-1);
}
