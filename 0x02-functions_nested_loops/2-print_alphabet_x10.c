#include "main.h"

/**
 * print_alphabet_x10 - uses two loops to print the alphabet 10 times.
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char x;
	int y = 0;

	while (y <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	y++;
	}
}
