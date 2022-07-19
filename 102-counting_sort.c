#include "sort.h"
/**
 * counting_sort- sort array
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: nothing
 * 
 */
void counting_sort(int *array, size_t size)
{
    int n, j, *count, *tmp;
	size_t i;

	if (!array || size < 2)
		return;
	n = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > n)
			n = array[i];
	}
	count = calloc((n + 1), sizeof(int));
	for (i = 0; i < size; i++)
	{
		count[array[i]]++;
	}
	for (j = 1; j < n; j++)
	{
		count[j + 1] += count[j];
	}
	print_array(count, n + 1);
	tmp = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count[array[i]]--;
		tmp[count[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
	{
		array[i] = tmp[i];
	}
	free(tmp);
	free(count);
}