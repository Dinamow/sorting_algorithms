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
	int tmp, tmp1;
	size_t i = 0, j = 0, index = 0;

	if (size <= 0 || !size || !array)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		tmp1 = array[i];
		for (j = i; j < size; j++)
		{
			if (tmp > array[j])
			{
				tmp = array[j];
				index = j;
			}
		}
		if (array[index] < tmp1)
		{
			array[i] = tmp;
			array[index] = tmp1;
			print_array(array, size);
			tmp = 0;
		}
	}
}
