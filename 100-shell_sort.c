#include "sort.h"
/**
 * shell_sort- sorts an array of integers in ascending order
 * using Knuth sequence
 * @array: array itself
 * @size:size of the arry
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = 1;

	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (size_t outer = interval; outer < size; outer++)
		{
			int temp = array[outer];
			size_t inner = outer;

			while (inner > interval - 1 && array[inner - interval] >= temp)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}
			array[inner] = temp;
		}

		/*printf("Interval: %lu\n", interval);*/
		for (size_t i = 0; i < size; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		interval = (interval - 1) / 3;
	}
}

