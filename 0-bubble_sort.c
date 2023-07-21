#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of int to be sorted
 * @size: size of @array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, swapping = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			swapping = 0;
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swapping = 1;
				print_array(array, size);
			}
		}
		if (swapping == 0)
		{
			break;
		}
	}
}
