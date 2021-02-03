#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in array
 */

void selection_sort(int *array, size_t size)
{
	size_t a = 0, b = 0, c = 0, d = 0;

	while (b < size - 1)
	{
		c = b;
		a = b + 1;
		while (a < size)
		{
			if (array[a] < array[c])
			{
       				c = a;
			}
			a++;
		}
		if (c != b)
		{
			d = array[c];
			array[c] = array[b];
			array[b] = d;
			print_array(array, size);
		}
		b++;
	}
}
