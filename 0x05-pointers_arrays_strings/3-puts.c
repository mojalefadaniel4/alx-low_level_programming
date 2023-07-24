#include "main.h"
/**
 * _puts - prints a randon string,
 * followed by a new line,
 * to stdout
 * @strn: string to print
 */
void _puts(char *strn)
{
	while (*strn != '\0')
	{
		_putchar(*strn++);
	}
		_putchar('\n');
}
