#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Include the necessary header */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Print the random number and determine if it's positive, negative, or zero */
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}

