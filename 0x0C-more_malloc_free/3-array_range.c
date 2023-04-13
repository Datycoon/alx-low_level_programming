#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arange;
	int i;

	if (min > max)
		return (NULL);

	arange = malloc(sizeof(*arange) * ((max - min) + 1));

	if (arange == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arange[i] = min;

	return (arange);
}
