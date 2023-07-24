#include "main.h"

/**
 * print_array - a method or function that prints
 *  n elements of an array
 * @i: array name
 * @j: is the number of elements OF the array to be printed
 * Return: i and j are inputs
 */
void print_array(int *i, int j)
{
	int x;

	for (x = 0; x < (j - 1); x++)
	{
		printf("%d, ", i[x]);
	}
		if (x == (j - 1))
		{
			printf("%d", i[j - 1]);
		}
			printf("\n");
}
