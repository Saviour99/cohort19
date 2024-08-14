#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: value if found and -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	size_t mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (mid + 1 + advanced_binary(array + mid + 1, size - mid - 1, value));
	else
		return (advanced_binary(array, mid, value));
}
