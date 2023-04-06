#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if they can
 * be considered identical, otherwise returns 0.
 * @s1: first string to be compared
 * @s2: second string to be compared, which can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* If both strings are empty, they are identical */
if (*s1 == '\0' && *s2 == '\0')
return (1);
/* If the first character of s2 is *,weeither ignore it or match it with s1 */
if (*s2 == '*')
{
/* If we ignore the *, we move s2 to the next character */
if (wildcmp(s1, s2 + 1))
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
/* If neither of the above cases is true, the strings can't be identical */
return (0);
}
if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
return (wildcmp(s1 + 1, s2 + 1));
/* If none of the above cases is true, the strings can't be identical */
return (0);
}
