#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
/* your code goes there */
if (lastDigit > 5)
{
printf("Last digit of %i is %i and is grater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %i is 0 and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
