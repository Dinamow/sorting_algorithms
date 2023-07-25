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
        size_t i, j, min;
	int temp;

        for (i = 0; i < size; i++)
        {
                min = i;
                for (j = i + 1; j < size; j++)
                {
                        if (array[i] > arr[j])
                                min = j;
                }
                temp = array[min];
                arr[min] = array[i];
                arr[i] = temp;

        }
}
