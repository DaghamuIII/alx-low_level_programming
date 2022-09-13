#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void);
/**
* print_alphabet_x10 -print the alphabet 10 times each call
* Description: Print alphabet ten times using _putchar
* return: 0 (success)
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
