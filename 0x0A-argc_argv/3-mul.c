#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main-This Is my function
* Description: this is a function
* @argc: total argc
* @argv: argument passed
* Return: success(0)
*/
int main(int argc, char **argv)
{
int result;
if (argc < 3)
{
printf("Error");
return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
