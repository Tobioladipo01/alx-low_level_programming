#include <stdio.h>

/**
 * main - prints alphabets
 * return: Always return 0
 */
int main(void)
{
	char ups;

	for (ups = 'a'; ups <= 'z'; ups++)
		putchar(ups);

	for (ups = 'A'; ups <= 'Z'; ups++)
		putchar(ups);

	putchar('\n');

	return (0);
}
