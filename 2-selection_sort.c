#include "sort.h"
/**
 * selection_sort - sort function with selection sort
 * @size: size of array
 * @array: pointer to the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	int tmp1;
	size_t i = 0, j = 0, index;

	if (size <= 0 || !size || !array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		index = i;
		tmp1 = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		if (array[index] < array[i])
		{
			array[i] = array[index];
			array[index] = tmp1;
			print_array(array, size);
			tmp1 = 0;
		}
	}
}
