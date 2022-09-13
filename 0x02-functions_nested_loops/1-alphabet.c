#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
* print_alphabet - prints alphabet
* Description: prints alphabet using _putchar
* Return: 0 (success)
*/
void print_alphabet(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
}
