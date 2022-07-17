#include "sort.h"
/**
 * bubble_sort-sort using bubble sort method
 * @array: the array of data to be sorted
 * @size: the size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t n;
	size_t i;
	short int swap;

	n = size;
	while (n > 0)
	{
		swap = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = i;
				print_array(array, size);
			}
		}
		n = swap;
	}
}
