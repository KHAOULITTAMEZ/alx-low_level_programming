#include "main.h"

/**
 * print_alphabet -prints the alphabet, in lowercase
 * return 0  Always
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
