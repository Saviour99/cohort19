#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: the value to search for
 * Return: the first index value, -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	char str[] = "Value found between indexes";
	int bs;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	for (i = 1; i < size && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	printf("%s [%lu] and [%lu]\n", str, i / 2, i < size ? i : size - 1);
	bs = binary_search(array + i / 2, i < size ? i - i / 2 : size - i / 2, value);
	return (bs);
}

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: the value to search for
 * Return: the first index where value is located, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d ", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
