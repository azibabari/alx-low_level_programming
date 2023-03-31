#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: the content of size bytes
 * @size: the bytes in size
 *
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
/* Print the position of the first byte of the line in hexadecimal*/
printf("%08x: ", i);
/* Print the hexadecimal content of the buffer*/
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x ", b[i + j]);
}
else
{
printf("   ");
}
}
/* Print the content of the buffer*/
printf(" ");
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (isprint(b[i + j]))
{
printf("%c", b[i + j]);
}
else
{
printf(".");
}
}
}
printf("\n");
}
if (size <= 0)
{
printf("\n");
}
}
