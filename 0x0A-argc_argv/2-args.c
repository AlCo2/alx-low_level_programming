#include <stdio.h>
#include "main.h"
/**
* main-This Is my function
* Description: this is a function
* @argc: total argc
* @argv: argument passed
* Return: success(0)
*/
int main(int argc, char** argv)
{
while (argc--)
{
    printf("%s\n", *argv++);
}
return (0);
}