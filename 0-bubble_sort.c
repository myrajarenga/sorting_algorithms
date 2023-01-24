#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers
 *@array: pointer to an array of unsorted integers
 *@size: the size of array
 *
 *Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* impliment the swaping */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap++;
				print_array(array, size);
			}
		}

	}


}
