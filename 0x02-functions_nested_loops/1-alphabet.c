#include<stdio.h>


	/**
	 * print_alphabet - print all alphabet in lowercase
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
