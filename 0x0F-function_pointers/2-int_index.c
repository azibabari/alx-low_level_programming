#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 *
 * @array: The array of integers to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to use to compare values.
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         -1 if no elements match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}

return (-1);
}
