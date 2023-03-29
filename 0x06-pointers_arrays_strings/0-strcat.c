#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenated two strings
 * @dest: destination string
 * @src: source strings
 *
 * Return: Always 0:
 */
char *_strcat(char *dest, char *src)
{
char *result = dest; /*keep track of the start of the destination string*/
/* find the end of the destination string*/
while (*dest != '\0')
{
dest++;
}
/* copy the source string to the end of the destination string*/
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0'; /* add a terminating null byte to the end of the result string*/
return (result); /* return a pointer to the resulting string*/
}
