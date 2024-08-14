#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: value if found and -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high, i;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);

	for (high = 0; high < size && array[high] < value; low = high, high += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
	}

	printf("Value found between indexes [%ld] = [%ld]\n", low, high);

	for (i = low; i <= high && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
