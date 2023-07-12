#include "search_algos.h"

#define VALUE_CHECKED(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

/**
 * linear_search - search for a value in an array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; ++i)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
