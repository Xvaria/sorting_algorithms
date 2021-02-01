#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a = 0;
	int b = 0, c = 0;

	while (c == 0)
	{
		c = 1;
		a = 0;
		while (a < size)
		{
			if (array[a] > array[a + 1] && array[a + 1])
			{
				b = array[a];
				array[a] = array[a + 1];
				array[a + 1] = b;
				print_array(array, size);
				c = 0;
			}
			a++;
		}
	}
}
