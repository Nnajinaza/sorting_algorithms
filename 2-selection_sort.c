#include "sort.h"

/**
 * selection_sort - function to display list using selection algorithm
 * @array: list of array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int j;

	if (array == NULL || size < 2)
		return;

	while (i < (size - 1))
	{
		j = smallest_val(array, i, size - 1);
		swap_fun(array, i, j);
		i++;
		if (i != (size - 1))
			print_array(array, size);
	}
}

/**
 * swap_fun - function to swap the values of a list
 * @arr: pointer to the array
 * @i: the first argument passed
 * @j: the second argumebt passed
 */
void swap_fun(int *arr, int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * smallest_val - function to look for the position of the smallest value
 * @arr: pointer to the array
 * @start: beginning of the array
 * @end: end of the array
 *
 * Return: j
 */
int smallest_val(int *arr, int start, int end)
{
	int i = start;
	int j = i + 1;

	while (i <= end)
	{
		if (arr[i] < arr[j])
		{
			j = i;
		}
		i++;
	}
	return (j);
}
