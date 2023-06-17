#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to the variable n each time it is executed
 * prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Check if n is positive, zero or negative */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
