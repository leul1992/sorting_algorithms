#include "sort.h"

/**
 * shell_sort- sort array
 * @array: the pointer to the array
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, gap = 1;

	while (gap <= size / 3)
	{
		gap = (gap * 3) + 1;
	}
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j > gap - 1 && array[j - gap] >= temp ; j = j - gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
