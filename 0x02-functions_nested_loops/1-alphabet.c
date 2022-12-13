#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
	return (0);
}
