#include "sort.h"

/**
 * shell_sort- sort array
 * @array: the pointer to the array
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int i, j;
	int temp;
	int gap = 1;

	while (gap <= (int) size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{

		for (j = gap; j < (int) size; j++)
		{
			temp = array[j];
			i = j;

			while (i > gap - 1 && array[i - gap] >= temp)
			{
				array[i] = array[i - gap];
				i -= gap;
			}
			array[i] = temp;
		}

		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
