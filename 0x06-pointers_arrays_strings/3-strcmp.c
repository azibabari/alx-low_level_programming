#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: secognd string
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
/*iterate over both strings until a null character or a difference is found*/
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
/*return the difference between the last compared characters*/
return (*s1 - *s2);
}
