#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: this is my code
 *
 * Return: always (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
    printf("is positive");
else
    printf("is negative");

return (0);
}
