#include "main.h"

/**
*string_toupper - change all lower case to upper case
*@n: pointer
*Return: n
*/
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
i++;
}
return (n);
}
