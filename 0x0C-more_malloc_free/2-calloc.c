#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
/* set memory to zero */
memset(ptr, 0, nmemb * size);
return (ptr);
}
