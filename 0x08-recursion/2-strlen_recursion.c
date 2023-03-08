#include "main.h"

/**
*_strlen_recursion -> function to get length of string
*@s: String parameter
*Return: Always 0 (success)
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
