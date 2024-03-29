#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: the minimum value (included) of the array.
 * @max: the maximum value (included) of the array.
 *
 * Return: If successful, a pointer to the newly created array.Otherwise, NULL.
 */
int *array_range(int min, int max)
{
int *arr, size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min++;
return (arr);
}
