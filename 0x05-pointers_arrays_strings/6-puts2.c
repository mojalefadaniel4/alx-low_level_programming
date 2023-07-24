#include "main.h"
/**
 * puts2 - take any pairs of characters
 * and print one character out of two
 * always starting with the first character
 * @strn: input
 * Return: print output to std
 */
void puts2(char *strn)
{
	int length = 0;
	int i = 0;
	int y;
	char *j = strn;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	i = length - 1;
	for (y = 0 ; y <= i ; y++)
	{
		if (y % 2 == 0)
	{
		_putchar(strn[y]);
	}
	}
	_putchar('\n');
}
