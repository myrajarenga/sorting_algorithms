#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**                                             
 * radix-sort - a function that sorts an array of integers     
 *in ascending order using the Radix sort                      
 * @array: array of integers                                   
 * @size: aize of the array                                    
 */
void radix_sort(int *array, size_t size)
{
	int max = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > max) 
		{
			max = array[i];
		}
	}

	int *temp_array = (int *)malloc(size * sizeof(int));
	int digit_place = 1;
	while (max / digit_place > 0) 
	{
		int digit_count[10] = {0};
		for (size_t i = 0; i < size; i++)
		{
			int digit = (array[i] / digit_place) % 10;
			digit_count[digit]++;
		}
		for (int i = 1; i < 10; i++)
		{
			digit_count[i] += digit_count[i - 1];
		}
		for (size_t i = size - 1; i < SIZE_MAX; i--)
		{
			int digit = (array[i] / digit_place) % 10;
			temp_array[--digit_count[digit]] = array[i];
		}
		for (size_t i = 0; i < size; i++)
		{
			array[i] = temp_array[i];
		}
		digit_place *= 10;
		printf("Array after sorting the %dth digit: ", digit_place);
		for(size_t i = 0; i < size; i++)
			printf("%d ", array[i]);
		printf("\n");
	}
	free(temp_array);
}       
