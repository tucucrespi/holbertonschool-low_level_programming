#include <stdio.h>

/**
 *main - print numbers 1 to 100
 *Return: print to numbers 1 to 100 except:
 *replace multiples three print Fizz
 *replace multiples five print Buzz
 *multiples of both three and five print FizzBuzz
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
