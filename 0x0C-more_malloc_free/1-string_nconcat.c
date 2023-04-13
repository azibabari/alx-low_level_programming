#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int s1_len, s2_len;
/* Treat NULL as empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s1_len = strlen(s1);
s2_len = strlen(s2);
/* Allocate memory for the concatenated string */
if (n < s2_len)
concat_str = malloc(s1_len + n + 1);
else
concat_str = malloc(s1_len + s2_len + 1);
if (concat_str == NULL)
return (NULL);
/* Copy s1 and n bytes of s2 to concat_str */
strcpy(concat_str, s1);
strncat(concat_str, s2, n);
return (concat_str);
}
