#include <stdio.h>

int find_outlier(const int *values, size_t count)
{   int i=0;
    int count_odd=0, count_even=0, last_odd, last_even;
    for(i; i<count; i++)
    {
        if(values[i]%2==0)
        {
            count_even++;
            last_even = values[i];
        }
        else
        {   
            count_odd++;
            last_odd = values[i];
        }
    }
    if(count_odd>count_even)
        return last_even;
    else
        return last_odd;
}