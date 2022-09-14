#include "main.h"

/**
 * print_alphabet -Entry point
 * Deescription: a function that prints the alphabet,
 *
 * in lowercase followed by a line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

