#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t n;
    
    n = size;
    while (n > 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                print_array(array,size);
            }
        }
        n--;
    }
}
