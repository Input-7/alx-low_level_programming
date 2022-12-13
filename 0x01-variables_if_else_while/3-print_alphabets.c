#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	int alph = 'a';
	int ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (alph <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
	return (0);
}
