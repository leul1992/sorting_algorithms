#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int partition(int *array, int left, int right, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
void insertion_sort_list(listint_t **list);
void swap(int *array, int item1, int item2);
void merge_sort(int *array, size_t size);
void merge_recursion(int *arr, int *array, size_t left, size_t right);
void merge_subarray(int *arr, int *array, size_t left,
size_t middle, size_t right);
#endif
