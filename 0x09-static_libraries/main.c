main.c/         1478294436  1000  1000  100664  147       `
#include "main.h"

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	return (0);
}

_putchar.c/     1478289691  1000  1000  100664  247       `
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
