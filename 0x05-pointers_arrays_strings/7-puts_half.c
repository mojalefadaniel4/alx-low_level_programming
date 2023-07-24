#include "main.h"
/**
 * puts_half - a take any string and print half of it
 * at every odd number lenghth, n = (length_of_the_string - 1) / 2
 * @strn: input
 * Return: half of whatever the input was
 */
void puts_half(char *strn)
{
	int i, j;

	int length = 0;

	for (i = 0; strn[i] != '\0'; i++)
		length++;

	j = (length / 2);

	if ((length % 2) == 1)
		j = ((length + 1) / 2);

	for (i = j; strn[i] != '\0'; i++)
		_putchar(strn[i]);
	_putchar('\n');
}
