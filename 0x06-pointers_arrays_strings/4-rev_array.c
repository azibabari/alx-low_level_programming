#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer
 * @n: number of elements ina array
 *
 * Return: Always o
 */
void reverse_array(int *a, int n)
{
int temp, i, j;
/* iterate over half of the array*/
for (i = 0, j = n - 1; i < j; i++, j--)
{
/* swap the elements at i and j*/
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
