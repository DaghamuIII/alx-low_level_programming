#include "main.h"
/**
* print_rev - prints a string s in reverse
* @s: string to be printed in reverse
* Return: (void)
*/
void print_rev(char *s)
{
	/* to find number of cahracter */
	int i;
	int j;
	int str_len;

	for (i = 0; s[i] != '\0'; i++)
		;
	str_len = i;

	/* printing in reverse */

	for (j = (str_len - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
