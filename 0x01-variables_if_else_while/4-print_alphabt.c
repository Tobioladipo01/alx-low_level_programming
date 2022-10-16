#include <stdio.h>

/**
 * main - prints alphabets except e and q
 * return: return 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}

	putchar('\n');

	return (0);
}
