#include "main.h"
/**
 * _strlen - takes arg and returns the length of a string
 * @strn: string
 * Return: length
 */
int _strlen(char *strn)
{
	int lngth = 0;

	while (*strn != '\0')
	{
		lngth++;
		strn++;
	}

	return (lngth);
}
