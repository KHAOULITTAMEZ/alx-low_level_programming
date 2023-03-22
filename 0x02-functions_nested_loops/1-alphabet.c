#include "main.h"

/**
 * print_alphabet -prints the alphabet, in lowercase
 * return 0  Always
 */


void Print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
