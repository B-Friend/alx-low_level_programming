#include <stdio.h>

/**
*main -> This is function that print it's namey
*@argc: argc_attribute_and unused parameter argc
*@argv: argv an array of a command listed
*Return: Always 0 (success)
*/
int main(int argc, char *argv[] _attribute_((unused)))
{
printf("%s\n", *argc - 1);
return (0);
}
~         
