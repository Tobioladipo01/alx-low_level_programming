#include <stdio.h>

/***
 * main - prints numbers
 * return: returns 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		printf("%d", a);

	printf("\n");

	return (0);
}
