#include <stdio.h>
/**
 * main - entry
 * return: always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}