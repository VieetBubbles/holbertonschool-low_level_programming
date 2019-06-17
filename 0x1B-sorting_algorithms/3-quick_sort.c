#include "sort.h"
void quickSort(int arr[], int low, int high, size_t size);
int partition(int arr[], int low, int high, size_t size);

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: the unsorted array of integers
 * @size: the size of the array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	int low;
	int high;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return;

	quickSort(array, low, high, size);
}

/**
 * quickSort - main function that implements QuickSort
 * @arr: Array to be sorted
 * @low: Starting index
 * @high: Endling Index
 * @size: The size of the array
 *
 * Return: nothing
 */

void quickSort(int arr[], int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now */
		/* at right place */
		pi = partition(arr, low, high, size);

		/* Separately sort elements before */
		/* partition and after partition */
		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 * partition - function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot.
 * @arr: Array to be sorted
 * @low: Starting index
 * @high: Endling Index
 * @size: The size of the array
 *
 * Return: the partitioning index
 */

int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];    /* pivot */
	int i = (low - 1);  /* Index of smaller element */
	int j;

	for (j = low; j <= high - 1; j++)
	{
		/* If current element is smaller than or */
		/* equal to pivot */
		if (arr[j] <= pivot)
		{
			i++;    /* increment index of smaller element */
			swap_int(&arr[i], &arr[j]);
			if (arr[i] != arr[j])
			{
				print_array(arr, size);
			}
		}
	}
	swap_int(&arr[i + 1], &arr[high]);
	if (arr[high] != arr[i + 1])
	{
		print_array(arr, size);
	}
	return (i + 1);
}



/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
