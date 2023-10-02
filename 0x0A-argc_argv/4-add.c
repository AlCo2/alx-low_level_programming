#include <stdio.h>
#include <ctype.h>
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
int sum;
if (argc == 1)
{
printf("0\n");
return (0);
}
if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1])+atoi(argv[2]);
printf("%d\n", sum);
return 0;
}
