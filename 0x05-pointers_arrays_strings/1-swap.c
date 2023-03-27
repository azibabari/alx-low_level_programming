#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp = *a; /* create a temporary variable and store the value of a*/
*a = *b; /* assign the value of b to a*/
*b = temp; /* assign the value of temp(which is the original value of a) to b*/
}
