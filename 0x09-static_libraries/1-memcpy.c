#include "main.h"

/**
*_memcpy - A function that  copy memory area
*@dest: dest memory area
*@src: memory where is copied
*@n: bytes from memory area to copy
*
*Return: memory area replaced
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
