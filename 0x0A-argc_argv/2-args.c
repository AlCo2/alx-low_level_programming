#include <stdio.h>
/**
* main-This Is my function
* Description: this is a function that print total of arg passed
* return: success(0)
*/
int main(int argc, char** argv)
{
    while(argc--)
    {
        printf("%s\n", *argv++);
    }
    return 0;
}