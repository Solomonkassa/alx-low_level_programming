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
	int *ar;
	int i;



	ar = malloc(sizeof(*ar) * ((max - min) + 1));



	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
