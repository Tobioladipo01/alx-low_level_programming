#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - shows the last digit of a number
 * Return: Always return 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				int a;

				a = n % 10;

					if (n > 5)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, a);
					}
					else if (n == 0)
					{
						printf("Last digit of %d is %d and is 0\n", n, a);
					}
					else
					{
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
					}
					return (0);
}
