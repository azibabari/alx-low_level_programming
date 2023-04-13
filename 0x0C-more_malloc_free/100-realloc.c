#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
/* If new_size is zero, free memory and return NULL */
if (new_size == 0)
{
free(ptr);
return (NULL);
}
/* If ptr is NULL, allocate new memory */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}
/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
{
return (ptr);
}
/* Allocate new memory */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
/* Copy contents of old memory block to new block */
if (new_size > old_size)
{
memcpy(new_ptr, ptr, old_size);
}
else
{
memcpy(new_ptr, ptr, new_size);
}
/* Free old memory block */
free(ptr);
return (new_ptr);
}
