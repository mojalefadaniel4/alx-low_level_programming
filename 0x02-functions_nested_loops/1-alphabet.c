#include "main.h"

/**
 * main - Entry point
 *  print_alphabet will print abcdefghijklmnopqrstuvxyz to stdout'
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

}
