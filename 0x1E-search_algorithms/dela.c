#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size:  number of elements
 * @value: the value to search for
 * Return: value if successful and -1 if not
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return pos;
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
