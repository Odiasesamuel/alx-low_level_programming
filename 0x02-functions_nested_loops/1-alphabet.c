#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 *
 * created : Odiase_samuel
 * cc: 5th july, 2022
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
