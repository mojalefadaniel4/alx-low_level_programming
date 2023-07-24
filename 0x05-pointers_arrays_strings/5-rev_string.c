#include "main.h"

/**
 * rev_string - Reverses any string from input string
 * @strn: Input string
 * Return: Input string characters in reverse
 */

void rev_string(char *strn)
{
	char rev = strn[0];
	int i;
	int j = 0;

	while (strn[j] != '\0')
	j++;
	for (i = 0; i < j; i++)
	{
		j--;
		rev = strn[i];
		strn[i] = strn[j];
		strn[j] = rev;
	}
}
