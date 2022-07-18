#include "sort.h"
/**
 * selection_sort- sort array
 * @array: the pointer to the array
 * @size: the size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t n;
	int temp;
	size_t small, i, j;

	n = size;
	for (i = 0; i < n - 1; i++)
	{
		small = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[small] > array[j])
			small = j;
		}
		if (small != i)
		{
			temp = array[small];
			array[small] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}

}
