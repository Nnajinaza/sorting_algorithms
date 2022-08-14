#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sort.
  * @size: THe length of the aaray.
  * Return: Nothing.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int aux = 0, flag;

	if (array == NULL || size == 2)
		return;
	for (; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
