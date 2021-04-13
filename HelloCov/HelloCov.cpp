#include "HelloCov.h"

bool is_power_of_two(int n)
{
    if (n < 0)
        return false;

    return (n & (n - 1)) == 0;
}

int multiply_by_two(int n)
{
    return n << 1;
}

int divide_by_two(int n)
{
    return n >> 1;
}

int count_one(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

