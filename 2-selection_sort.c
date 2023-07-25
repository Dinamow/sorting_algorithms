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
	int tmp, i, j;
	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (j = i; j < size; j++)
		{
			if(tmp > array[j])
				tmp = array[j];
		}
		array[i] = tmp;
		print_array(array, size);
	}
}
