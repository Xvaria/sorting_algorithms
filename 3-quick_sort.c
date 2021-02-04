#include "sort.h"

/**
 * q_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 * @o_size: other array size
 * @o_array: other array pointer
 * Return: always 0
 **/
void _qsort(int *array, size_t size, int *oarray, size_t osize)
{
	size_t i = 0, j = 0;
	int a, b;

	if (size > 1)
	{
		b = array[size - 1];
		while (i < size)
		{
			if (array[i] < b)
			{
				if (array[j] != array[i])
				{
					a = array[i];
					array[i] = array[j];
					array[j] = a;
					print_array(oarray, osize);
				}
				j++;
			}
			i++;
		}
		if (array[i - 1] == array[j])
			j = size - 1;
		if (array[j] != array[size - 1])
		{
			a = array[j];
			array[j] = array[size - 1];
			array[size - 1] = a;
			print_array(oarray, osize);
		}
		if (j)
			_qsort(array, j, oarray, osize);
		_qsort(array + j, size - j, oarray, osize);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 **/
void quick_sort(int *array, size_t size)
{
	if (size == 0 || array == NULL)
		return;
	_qsort(array, size, array, size);
}
