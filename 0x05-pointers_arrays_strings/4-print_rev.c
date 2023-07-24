#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @strn: string
 * return: 0
 */
void print_rev(char *strn)
{
	int length = 0;
	int i;

	while (*strn != '\0')
	{
		length++;
		strn++;
	}
	strn--;
	for (i = length; i > 0; i--)
	{
		_putchar(*strn);
		strn--;
	}

	_putchar('\n');
}
