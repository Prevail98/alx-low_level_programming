#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet
 *
 * Return: return only 0
 */

void print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

	}
}
