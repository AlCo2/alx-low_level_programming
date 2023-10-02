#include <stdio.h>
#include "main.h"
/**
* main-This Is my function
* Description: this is a function that print total of arg passed
* @argc: total argc
* @argv: argument passed
* Return: success(0)
*/
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", *argv);
return (0);
}
